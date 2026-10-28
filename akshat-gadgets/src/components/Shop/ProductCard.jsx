import { useEffect, useRef, useState } from 'react'
import './ProductCard.css'

const getProductImageUrl = (image) => (
  `https://images.unsplash.com/${image}?auto=format&fit=crop&w=1000&q=85`
)

function ProductCard({
  name,
  category,
  minimumOrderQuantity,
  piecesPerUnit,
  price,
  images,
}) {
  const [quantity, setQuantity] = useState(0)
  const [galleryOpen, setGalleryOpen] = useState(false)
  const [activeImage, setActiveImage] = useState(0)
  const [touchStart, setTouchStart] = useState(null)
  const galleryRef = useRef(null)

  const addToCart = () => setQuantity(minimumOrderQuantity)
  const removeFromCart = () => {
    setQuantity((currentQuantity) => (
      currentQuantity <= minimumOrderQuantity ? 0 : currentQuantity - 1
    ))
  }

  useEffect(() => {
    if (!galleryOpen) return undefined

    const dialog = galleryRef.current
    if (dialog && !dialog.open) dialog.showModal()

    const handleGalleryKeyDown = (event) => {
      if (event.key === 'ArrowRight') {
        setActiveImage((current) => (current + 1) % images.length)
      } else if (event.key === 'ArrowLeft') {
        setActiveImage((current) => (current - 1 + images.length) % images.length)
      }
    }

    window.addEventListener('keydown', handleGalleryKeyDown)
    return () => window.removeEventListener('keydown', handleGalleryKeyDown)
  }, [galleryOpen, images.length])

  const showPreviousImage = () => {
    setActiveImage((current) => (current - 1 + images.length) % images.length)
  }

  const showNextImage = () => {
    setActiveImage((current) => (current + 1) % images.length)
  }

  const handleTouchEnd = (event) => {
    if (touchStart === null) return
    const distance = event.changedTouches[0].clientX - touchStart
    if (Math.abs(distance) > 50) {
      if (distance < 0) showNextImage()
      else showPreviousImage()
    }
    setTouchStart(null)
  }

  return (
    <article className="product-card">
      <button
        className="product-card-image"
        type="button"
        onClick={() => {
          setActiveImage(0)
          setGalleryOpen(true)
        }}
        aria-label={`View more images of ${name}`}
      >
        <img src={getProductImageUrl(images[0])} alt={name} loading="lazy" decoding="async" />
        <span className="product-card-gallery-note">Click image to view more photos</span>
      </button>
      <div className="product-card-content">
        <p className="product-card-category">{category}</p>
        <h3>{name}</h3>
        <p className="product-card-description">
          Minimum order: {minimumOrderQuantity} {minimumOrderQuantity === 1 ? 'unit' : 'units'}
        </p>
        <p className="product-card-quantity">
          1 unit contains {piecesPerUnit} {piecesPerUnit === 1 ? 'piece' : 'pieces'}
        </p>
        <p className="product-card-price">{price}/unit</p>
        {quantity === 0 ? (
          <button className="product-card-add" type="button" onClick={addToCart}>
            Add to Cart
          </button>
        ) : (
          <div className="product-card-quantity-control" aria-label={`${name} quantity`}>
            <button
              className="quantity-button"
              type="button"
              aria-label={`Remove one ${name}`}
              onClick={removeFromCart}
            >
              −
            </button>
            <span className="quantity-value" aria-live="polite">{quantity}</span>
            <button
              className="quantity-button"
              type="button"
              aria-label={`Add one ${name}`}
              onClick={() => setQuantity((currentQuantity) => currentQuantity + 1)}
            >
              +
            </button>
          </div>
        )}
      </div>
      {galleryOpen && (
        <dialog
          className="product-gallery"
          ref={galleryRef}
          aria-label={`${name} image gallery`}
          onClose={() => setGalleryOpen(false)}
          onClick={(event) => {
            if (event.target === event.currentTarget) event.currentTarget.close()
          }}
        >
          <div className="product-gallery-content">
            <div className="product-gallery-header">
              <p>{name}</p>
              <button
                className="product-gallery-close"
                type="button"
                aria-label="Close image gallery"
                onClick={() => galleryRef.current?.close()}
              >
                ×
              </button>
            </div>
            <div
              className="product-gallery-viewer"
              onTouchStart={(event) => setTouchStart(event.touches[0].clientX)}
              onTouchEnd={handleTouchEnd}
            >
              <img src={getProductImageUrl(images[activeImage])} alt={`${name}, image ${activeImage + 1}`} />
              <button
                className="product-gallery-arrow product-gallery-previous"
                type="button"
                aria-label="Previous image"
                onClick={showPreviousImage}
              >
                ‹
              </button>
              <button
                className="product-gallery-arrow product-gallery-next"
                type="button"
                aria-label="Next image"
                onClick={showNextImage}
              >
                ›
              </button>
            </div>
            <p className="product-gallery-count">
              {activeImage + 1} / {images.length}
            </p>
          </div>
        </dialog>
      )}
    </article>
  )
}

export default ProductCard
