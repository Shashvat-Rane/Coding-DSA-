import './ProductsSlidder.css'

const products = [
  {
    name: 'Wireless headphones',
    image: 'photo-1505740420928-5e560c06d30e',
  },
  {
    name: 'Everyday smartwatch',
    image: 'photo-1523275335684-37898b6baf30',
  },
  {
    name: 'Wireless earbuds',
    image: 'photo-1606220945770-b5b6c2c55bf1',
  },
  {
    name: 'Portable speaker',
    image: 'photo-1608043152269-423dbba4e7e1',
  },
]

function ProductsSlidder() {
  return (
    <a className="product-slider" href="#shop" aria-label="Explore products in the shop">
      <div className="product-slider-heading">
        <span>A peek at what’s in store</span>
        <span className="product-slider-link" aria-hidden="true">Explore the shop →</span>
      </div>
      <div className="product-slider-window">
        <div className="product-slider-track" aria-hidden="true">
          {[0, 1].map((group) => (
            <div className="product-slider-group" key={group}>
              {products.map((product) => (
                <div className="product-slide" key={product.name}>
                  <img
                    src={`https://images.unsplash.com/${product.image}?auto=format&fit=crop&w=700&q=80`}
                    alt=""
                    loading="lazy"
                    decoding="async"
                  />
                  <span>{product.name}</span>
                </div>
              ))}
            </div>
          ))}
        </div>
      </div>
    </a>
  )
}

export default ProductsSlidder
