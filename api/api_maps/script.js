let map;
let directionsService;
let directionsRenderer;

function initMap() {
    const mapOptions = {
        center: { lat: 10.762622, lng: 106.660172 }, // Default center (Ho Chi Minh City, Vietnam)
        zoom: 13,
        mapId: "cc25807896db0ea3"
    };

    map = new google.maps.Map(document.getElementById("map"), mapOptions);

    directionsService = new google.maps.DirectionsService();
    directionsRenderer = new google.maps.DirectionsRenderer();

    directionsRenderer.setMap(map);

    const position = { lat: 10.762622, lng: 106.660172 }; //HCM - VN
    if (google.maps.marker && google.maps.marker.AdvancedMarkerElement) {
        const marker = new google.maps.marker.AdvancedMarkerElement({
            map,
            position: position,
            title: 'Default Location'
        });
    } else {
        const marker = new google.maps.Marker({
            map,
            position: position,
            title: 'Default Location'
        });
    }
}

document.getElementById('findRoute').addEventListener('click', () => {
    const start = document.getElementById('start').value;
    const end = document.getElementById('end').value;

    if (start && end) {
        calculateAndDisplayRoute(start, end);
    } else {
        alert('Please enter both starting point and destination.');
    }
});

function calculateAndDisplayRoute(start, end) {
    directionsService.route(
        {
            origin: start,
            destination: end,
            travelMode: google.maps.TravelMode.DRIVING,
        },
        (response, status) => {
            if (status === 'OK') {
                directionsRenderer.setDirections(response);

                // Add marker at the start location
                const startMarkerOptions = {
                    map,
                    position: response.routes[0].legs[0].start_location,
                    title: 'Start Location'
                };

                if (google.maps.marker && google.maps.marker.AdvancedMarkerElement) {
                    new google.maps.marker.AdvancedMarkerElement(startMarkerOptions);
                } else {
                    new google.maps.Marker(startMarkerOptions);
                }

                // Add marker at the end location
                const endMarkerOptions = {
                    map,
                    position: response.routes[0].legs[0].end_location,
                    title: 'End Location'
                };

                if (google.maps.marker && google.maps.marker.AdvancedMarkerElement) {
                    new google.maps.marker.AdvancedMarkerElement(endMarkerOptions);
                } else {
                    new google.maps.Marker(endMarkerOptions);
                }
            } else {
                window.alert('Directions request failed due to ' + status);
            }
        }
    );
}
