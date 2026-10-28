import './HomePage.css'
import ProductsSlidder from './ProductsSlidder.jsx'
import WelcomeCard from './WelcomeCard.jsx'

function HomePage() {
  return (
    <main id="home" className="home-page">
      <WelcomeCard />
      <ProductsSlidder />

      <a
        className="instagram-section"
        href="https://www.instagram.com/akshatgadgetsworld?dlrf=MWdnNG5hdXlyOTRsdg=="
        target="_blank"
        rel="noreferrer"
        aria-labelledby="instagram-title"
      >
        <div className="instagram-icon" aria-hidden="true">
          <svg viewBox="0 0 24 24" fill="none">
            <rect x="3" y="3" width="18" height="18" rx="5" />
            <circle cx="12" cy="12" r="4" />
            <circle className="instagram-flash" cx="17.5" cy="6.5" r="1" />
          </svg>
        </div>
        <div className="instagram-copy">
          <p className="home-eyebrow">STAY IN THE LOOP</p>
          <h2 id="instagram-title">Follow us on Instagram</h2>
          <p>Get the latest updates and be the first to see our new products.</p>
        </div>
        <span className="instagram-decoration" aria-hidden="true">✦</span>
      </a>
    </main>
  )
}

export default HomePage
