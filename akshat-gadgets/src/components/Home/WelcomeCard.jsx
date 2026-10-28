import './WelcomeCard.css'

function WelcomeCard() {
  return (
    <section className="home-hero" aria-labelledby="home-title">
      <div className="home-hero-copy">
        <p className="home-eyebrow">WELCOME TO AKSHAT GADGETS</p>
        <h1 id="home-title">
          A little more
          <span> awesome every day.</span>
        </h1>
        <p className="home-description">
          Discover gadgets and everyday tech that make life more enjoyable.
          Find your next favorite right here.
        </p>
        <a className="home-cta" href="#shop">
          Explore the shop
          <span aria-hidden="true">→</span>
        </a>
      </div>

      <div className="home-hero-art" aria-hidden="true">
        <div className="hero-orbit hero-orbit-one" />
        <div className="hero-orbit hero-orbit-two" />
        <div className="hero-spark hero-spark-one">✦</div>
        <div className="hero-spark hero-spark-two">✧</div>
        <div className="hero-card">
          <span className="hero-card-label">YOUR EVERYDAY, UPGRADED</span>
          <div className="hero-card-icon">
            <svg viewBox="0 0 64 64" fill="none">
              <path d="M12 35v-5a20 20 0 0 1 40 0v5" />
              <rect x="10" y="33" width="12" height="19" rx="6" />
              <rect x="42" y="33" width="12" height="19" rx="6" />
              <path d="M48 51c-2 5-7 7-14 7" />
            </svg>
          </div>
          <span className="hero-card-caption">Find your next favorite</span>
        </div>
        <span className="hero-dot hero-dot-one" />
        <span className="hero-dot hero-dot-two" />
      </div>
    </section>
  )
}

export default WelcomeCard
