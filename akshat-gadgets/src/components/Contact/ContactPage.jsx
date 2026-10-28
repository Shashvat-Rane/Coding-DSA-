import './ContactPage.css'

function ContactPage() {
  return (
    <main className="contact-page">
      <section className="contact-intro" aria-labelledby="contact-title">
        <p className="contact-eyebrow">CONTACT AKSHAT GADGETS</p>
        <h1 id="contact-title">We’d love to hear from you.</h1>
        <p>
          Whether you have a question or want to visit our shop, here’s how to
          reach us.
        </p>
      </section>

      <section className="contact-panel" aria-label="Contact Akshat Gadgets">
        <div className="contact-owner">
          <div className="owner-avatar" aria-hidden="true">A</div>
          <p className="contact-owner-eyebrow">YOUR LOCAL GADGET SHOP</p>
          <h2>Akshat Jain</h2>
          <p className="contact-owner-description">
            Here to help you find the right gadgets and make every purchase a
            little easier.
          </p>
          <div className="owner-divider" />
          <p className="owner-signoff">Thanks for supporting our shop.</p>
          <span className="contact-owner-decoration" aria-hidden="true">✦</span>
        </div>

        <div className="contact-details">
          <p className="contact-eyebrow">GET IN TOUCH</p>
          <h2>Contact details</h2>
          <p className="contact-details-description">
            Reach out by phone or email, or come by the shop.
          </p>

          <div className="contact-detail-list">
            <div className="contact-detail">
              <span className="contact-detail-icon" aria-hidden="true">
                <svg viewBox="0 0 24 24" fill="none">
                  <path d="M7 3H4a1 1 0 0 0-1 1c0 9.4 7.6 17 17 17a1 1 0 0 0 1-1v-3l-5-2-2 3a14 14 0 0 1-7-7l3-2-2-5Z" />
                </svg>
              </span>
              <span className="contact-detail-copy">
                <span className="contact-detail-label">PHONE</span>
                <span className="contact-detail-value">1234567890</span>
              </span>
            </div>

            <div className="contact-detail">
              <span className="contact-detail-icon" aria-hidden="true">
                <svg viewBox="0 0 24 24" fill="none">
                  <rect x="3" y="5" width="18" height="14" rx="2" />
                  <path d="m4 7 8 6 8-6" />
                </svg>
              </span>
              <span className="contact-detail-copy">
                <span className="contact-detail-label">EMAIL</span>
                <span className="contact-detail-value">example@mail.com</span>
              </span>
            </div>

            <a
              className="contact-detail contact-address"
              href="https://www.google.com/maps"
              target="_blank"
              rel="noreferrer"
              aria-label="View shop address on Google Maps"
            >
              <span className="contact-detail-icon" aria-hidden="true">
                <svg viewBox="0 0 24 24" fill="none">
                  <path d="M20 10c0 5-8 12-8 12S4 15 4 10a8 8 0 1 1 16 0Z" />
                  <circle cx="12" cy="10" r="2.5" />
                </svg>
              </span>
              <span className="contact-detail-copy">
                <span className="contact-detail-label">SHOP ADDRESS</span>
                <span className="contact-detail-value">
                  Shop No. 1047, Nathini Heights,
                  <br />
                  Near CSMT, Mumbai, Maharashtra,
                  <br />
                  Pin Code: 404400
                </span>
              </span>
              <span className="contact-detail-arrow" aria-hidden="true">↗</span>
            </a>
          </div>
        </div>
      </section>
    </main>
  )
}

export default ContactPage
