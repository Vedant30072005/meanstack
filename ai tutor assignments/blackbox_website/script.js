// Smooth scrolling for nav links
document.querySelectorAll('nav a').forEach(anchor => {
    anchor.addEventListener('click', function(e) {
        e.preventDefault();
        document.querySelector(this.getAttribute('href')).scrollIntoView({
            behavior: 'smooth'
        });
    });
});

// 3D Scene Setup (Three.js)
const scene = new THREE.Scene();
const camera = new THREE.PerspectiveCamera(75, window.innerWidth / window.innerHeight, 0.1, 1000);
const renderer = new THREE.WebGLRenderer({ antialias: true });
renderer.setSize(800, 400); // Adjust size
document.getElementById('3d-scene').appendChild(renderer.domElement);

// Add lighting
const ambientLight = new THREE.AmbientLight(0xffffff, 0.5);
scene.add(ambientLight);
const pointLight = new THREE.PointLight(0xffffff, 1);
pointLight.position.set(10, 10, 10);
scene.add(pointLight);

// Add perfume bottles (simple cylinders)
const bottleGeometry = new THREE.CylinderGeometry(0.5, 0.5, 2, 32);
const bottleMaterial = new THREE.MeshStandardMaterial({ color: 0x87ceeb, transparent: true, opacity: 0.8 });
const bottle1 = new THREE.Mesh(bottleGeometry, bottleMaterial);
bottle1.position.x = -2;
scene.add(bottle1);

const bottle2 = new THREE.Mesh(bottleGeometry, bottleMaterial);
bottle2.position.x = 2;
scene.add(bottle2);

// Add shelf (simple box)
const shelfGeometry = new THREE.BoxGeometry(6, 0.5, 1);
const shelfMaterial = new THREE.MeshStandardMaterial({ color: 0x8b4513 });
const shelf = new THREE.Mesh(shelfGeometry, shelfMaterial);
shelf.position.y = -1;
scene.add(shelf);

camera.position.z = 5;

// Animation loop
function animate() {
    requestAnimationFrame(animate);
    bottle1.rotation.y += 0.01;
    bottle2.rotation.y -= 0.01;
    renderer.render(scene, camera);
}
animate();

// Scent Mixer
document.getElementById('mix').addEventListener('click', () => {
    const base = document.getElementById('base').value;
    const note = document.getElementById('note').value;
    document.getElementById('result').textContent = `Your mix: ${base} with ${note}. Imagine the scent!`;
});

// Placeholder for "Try Scent" buttons (could integrate with Web Audio API for sound cues)
document.querySelectorAll('.try-scent').forEach(btn => {
    btn.addEventListener('click', () => {
        alert('Scent diffused! (Imagine a floral aroma)');
    });
});