// scripts.js

// Smooth scrolling for navigation links
document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function(e) {
        e.preventDefault();
        const targetId = this.getAttribute('href');
        const targetElement = document.querySelector(targetId);
        
        if (targetElement) {
            targetElement.scrollIntoView({
                behavior: 'smooth',
                block: 'start'
            });
        }

        // Close mobile menu if open
        const navMenu = document.getElementById('nav-menu');
        if (navMenu && !navMenu.classList.contains('hidden')) {
            navMenu.classList.add('hidden');
        }
    });
});

// Mobile navigation toggle
document.getElementById('nav-toggle')?.addEventListener('click', function() {
    const navMenu = document.getElementById('nav-menu');
    if (navMenu) {
        navMenu.classList.toggle('hidden');
    }
});

// Contact button toggle with simplified animation
document.getElementById('contact-btn')?.addEventListener('click', function() {
    const contactInfo = document.getElementById('contact-info');
    if (contactInfo) {
        contactInfo.classList.toggle('hidden');
        this.textContent = contactInfo.classList.contains('hidden') ? 'Contact Me' : 'Hide Contact';
        
        // Simplified toggle without transform animation
        contactInfo.style.transition = 'opacity 0.3s ease';
        contactInfo.style.opacity = contactInfo.classList.contains('hidden') ? '0' : '1';
    }
});

// Simplified typewriter effect for header subtitle using CSS
const subtitle = document.querySelector('header h2');
if (subtitle) {
    // Rely on CSS for typewriter effect (defined in styles.css)
    subtitle.classList.add('typewriter');
}

// Simplified scroll reveal animations with higher threshold
const observer = new IntersectionObserver((entries) => {
    entries.forEach(entry => {
        if (entry.isIntersecting) {
            entry.target.classList.add('fade-in');
        }
    });
}, { threshold: 0.5 }); // Increased threshold for earlier triggering

document.querySelectorAll('section').forEach(element => {
    element.classList.add('opacity-0');
    observer.observe(element);
});

// Remove unnecessary CSS animations (handled in styles.css)
const style = document.createElement('style');
style.innerHTML = `
    .typewriter {
        animation: typing 2s steps(30, end), blink-caret 0.5s step-end infinite;
        white-space: nowrap;
        overflow: hidden;
        border-right: 2px solid #ffffff;
    }
    @keyframes typing {
        from { width: 0; }
        to { width: 100%; }
    }
    @keyframes blink-caret {
        50% { border-color: transparent; }
    }
    @keyframes fadeIn {
        from { opacity: 0; transform: translateY(15px); }
        to { opacity: 1; transform: translateY(0); }
    }
    .fade-in {
        animation: fadeIn 0.6s ease-out forwards;
    }
`;
document.head.appendChild(style);