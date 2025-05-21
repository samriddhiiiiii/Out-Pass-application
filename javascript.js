document.addEventListener('DOMContentLoaded', function () {
  const form = document.getElementById('outpassForm');
  const modal = document.getElementById('responseModal');
  const responseMessage = document.getElementById('responseMessage');
  const closeBtn = modal.querySelector('.close');

  form.addEventListener('submit', function(event) {
    event.preventDefault();

    const name = form.name.value.trim();
    const enrollment = form.enrollment.value.trim();

    // Simple validation
    if (name === '' || enrollment === '') {
      alert('Please fill out all required fields.');
      return;
    }

    // Prepare the message
    responseMessage.innerHTML = `
      <strong>Out Pass Request Submitted Successfully!</strong><br />
      <br />
      <strong>Name:</strong> ${name}<br />
      <strong>Enrollment No:</strong> ${enrollment}
    `;

    // Show modal popup
    modal.style.display = 'flex';

    // After showing popup, reset form
    form.reset();

    // Focus on message for screen readers
    responseMessage.focus();
  });

  // Close modal function
  function closeModal() {
    modal.style.display = 'none';
    // Return focus back to form submit button for good UX
    form.querySelector('button[type="submit"]').focus();
  }

  closeBtn.addEventListener('click', closeModal);

  // Close modal if clicked outside content
  window.addEventListener('click', function(event) {
    if (event.target === modal) {
      closeModal();
    }
  });

  // Close modal on Escape key
  window.addEventListener('keydown', function(event) {
    if (event.key === 'Escape' && modal.style.display === 'flex') {
      closeModal();
    }
  });
});


