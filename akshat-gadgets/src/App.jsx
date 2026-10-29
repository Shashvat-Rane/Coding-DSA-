import { useEffect, useState } from 'react'
import './App.css'
import Header from './components/Header.jsx'
import ContactPage from './components/Contact/ContactPage.jsx'
import HomePage from './components/Home/HomePage.jsx'
import ShopPage from './components/Shop/ShopPage.jsx'

function App() {
  const [currentPage, setCurrentPage] = useState(() => window.location.hash)
  const [cartItems, setCartItems] = useState({})

  const cartItemCount = Object.values(cartItems).reduce(
    (total, quantity) => total + quantity,
    0,
  )

  const updateCartQuantity = (productId, quantity) => {
    setCartItems((currentItems) => {
      if (quantity === 0) {
        const remainingItems = { ...currentItems }
        delete remainingItems[productId]
        return remainingItems
      }

      return { ...currentItems, [productId]: quantity }
    })
  }

  useEffect(() => {
    const updatePage = () => setCurrentPage(window.location.hash)
    window.addEventListener('hashchange', updatePage)
    return () => window.removeEventListener('hashchange', updatePage)
  }, [])

  useEffect(() => {
    window.scrollTo(0, 0)
  }, [currentPage])

  return (
    <div className="app">
      <Header cartItemCount={cartItemCount} />
      {currentPage === '#contact'
        ? <ContactPage />
        : currentPage === '#shop'
          ? (
            <ShopPage
              cartItems={cartItems}
              onCartQuantityChange={updateCartQuantity}
            />
          )
          : <HomePage />}
    </div>
  )
}

export default App
