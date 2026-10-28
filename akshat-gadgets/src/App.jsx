import { useEffect, useState } from 'react'
import './App.css'
import Header from './components/Header.jsx'
import ContactPage from './components/Contact/ContactPage.jsx'
import HomePage from './components/Home/HomePage.jsx'
import ShopPage from './components/Shop/ShopPage.jsx'

function App() {
  const [currentPage, setCurrentPage] = useState(() => window.location.hash)

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
      <Header />
      {currentPage === '#contact'
        ? <ContactPage />
        : currentPage === '#shop'
          ? <ShopPage />
          : <HomePage />}
    </div>
  )
}

export default App
