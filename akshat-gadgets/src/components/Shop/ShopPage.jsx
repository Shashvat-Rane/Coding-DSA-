import { useState } from 'react'
import ProductCard from './ProductCard.jsx'
import './ShopPage.css'

const priceFormatter = new Intl.NumberFormat('en-IN', {
  style: 'currency',
  currency: 'INR',
  maximumFractionDigits: 0,
})

const products = [
  {
    id: 'wireless-headphones',
    name: 'Wireless Headphones',
    category: 'Audio',
    minimumOrderQuantity: 3,
    piecesPerUnit: 1,
    price: 2499,
    images: [
      'photo-1505740420928-5e560c06d30e',
      'photo-1546435770-a3e426bf472b',
      'photo-1484704849700-f032a568e944',
    ],
  },
  {
    id: 'everyday-smartwatch',
    name: 'Everyday Smartwatch',
    category: 'Wearables',
    minimumOrderQuantity: 1,
    piecesPerUnit: 1,
    price: 3999,
    images: [
      'photo-1523275335684-37898b6baf30',
      'photo-1524592094714-0f0654e20314',
      'photo-1508685096489-7aacd43bd3b1',
    ],
  },
  {
    id: 'wireless-earbuds',
    name: 'Wireless Earbuds',
    category: 'Audio',
    minimumOrderQuantity: 5,
    piecesPerUnit: 1,
    price: 1799,
    images: [
      'photo-1606220945770-b5b6c2c55bf1',
      'photo-1590658268037-6bf12165a8df',
      'photo-1608161260366-7c6fef8d5f17',
    ],
  },
  {
    id: 'portable-speaker',
    name: 'Portable Speaker',
    category: 'Audio',
    minimumOrderQuantity: 1,
    piecesPerUnit: 1,
    price: 2199,
    images: [
      'photo-1608043152269-423dbba4e7e1',
      'photo-1608539073028-4a3e8f89d2f3',
      'photo-1589003077984-894e133d0a6e',
    ],
  },
]

function ShopPage() {
  const [search, setSearch] = useState('')
  const [selectedCategory, setSelectedCategory] = useState('all')
  const [priceSort, setPriceSort] = useState('')
  const categories = [...new Set(products.map((product) => product.category))]
  const normalizedSearch = search.trim().toLowerCase()
  const filteredProducts = products
    .filter((product) => {
      const matchesSearch = `${product.name} ${product.category}`
        .toLowerCase()
        .includes(normalizedSearch)
      const matchesCategory = selectedCategory === 'all'
        || product.category === selectedCategory
      return matchesSearch && matchesCategory
    })
    .sort((first, second) => {
      if (priceSort === 'low-to-high') return first.price - second.price
      if (priceSort === 'high-to-low') return second.price - first.price
      return 0
    })

  return (
    <main id="shop" className="shop-page">
      <section className="shop-intro" aria-labelledby="shop-title">
        <p className="shop-eyebrow">THE AKSHAT GADGETS COLLECTION</p>
        <h1 id="shop-title">Find your next favorite.</h1>
      </section>

      <section className="shop-products" aria-label="Products">
        <div className="shop-products-heading">
          <h2>Our products</h2>
        </div>
        <div className="shop-filters">
          <label className="shop-search">
            <span className="shop-filter-label">Search</span>
            <input
              type="search"
              value={search}
              onChange={(event) => setSearch(event.target.value)}
              placeholder="Search by name or category"
            />
          </label>
          <label className="shop-filter">
            <span className="shop-filter-label">Category</span>
            <select
              value={selectedCategory}
              onChange={(event) => setSelectedCategory(event.target.value)}
            >
              <option value="all">All categories</option>
              {categories.map((category) => (
                <option key={category} value={category}>{category}</option>
              ))}
            </select>
          </label>
          <label className="shop-filter">
            <span className="shop-filter-label">Sort by price</span>
            <select
              value={priceSort}
              onChange={(event) => setPriceSort(event.target.value)}
            >
              <option value="">Featured</option>
              <option value="low-to-high">Low to high</option>
              <option value="high-to-low">High to low</option>
            </select>
          </label>
        </div>
        <div className="shop-product-grid">
          {filteredProducts.length > 0 ? (
            filteredProducts.map((product) => (
              <ProductCard
                key={product.id}
                {...product}
                price={priceFormatter.format(product.price)}
              />
            ))
          ) : (
            <p className="shop-empty-state">No products match your filters.</p>
          )}
        </div>
      </section>
    </main>
  )
}

export default ShopPage
