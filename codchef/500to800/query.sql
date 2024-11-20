 
CREATE DATABASE universe

-- galaxy list table
CREATE TABLE galaxy_list (
  id SERIAL PRIMARY KEY,                 
  name VARCHAR(50) NOT NULL,      
  galaxy_code VARCHAR(10) NOT NULL,      
  description VARCHAR(255) UNIQUE       
);


-- galaxy table column initialization
CREATE TABLE galaxy(
  galaxy_id Serial PRIMARY KEY,
  name VARCHAR(30),
  description VARCHAR(100) UNIQUE,
  galaxy_type VARCHAR(30) NOT NULL,
  age_in_millions_of_years decimal(10,4),
  number_of_stars INT,
  discovered_by VARCHAR(50),
  distance_from_earth_in_light_years DECIMAL (10,4) NOT NULL
  );



-- start table
CREATE TABLE star(
  star_id Serial PRIMARY KEY,
  name VARCHAR(50),
  description VARCHAR(100) UNIQUE,
  star_type VARCHAR(30) NOT NULL,
  mass_in_solar_masses DECIMAL (10,4),
  luminosity DECIMAL (10,4),temperature_in_kelvin INT,
  age_in_million_years DECIMAL (10,4),
  galaxy_id INT NOT NULL REFERENCES galaxy(galaxy_id) ON DELETE CASCADE);

-- planet table
CREATE TABLE planet(
  planet_id Serial PRIMARY KEY,
  name VARCHAR(50),description VARCHAR(100) UNIQUE,
  planet_type VARCHAR(30) NOT NULL,
  has_life BOOLEAN NOT NULL,
  distance_from_star_in_au DECIMAL (10,4),
  orbital_period_in_days DECIMAL (10,4),
  radius_in_km  INT,average_temperature INT,atmosphere_composition TEXT,
  galaxy_id INT NOT NULL REFERENCES galaxy(galaxy_id) ON DELETE CASCADE,
  star_id INT NOT NULL REFERENCES star(star_id) ON DELETE CASCADE);

--moon table
CREATE TABLE moon(
  moon_id Serial PRIMARY KEY,
  name VARCHAR(50),
  description VARCHAR(100) UNIQUE,
  moon_type VARCHAR(30) NOT NULL,
  radius_in_km DECIMAL (10,4) NOT NULL,
  orbital_period_in_days  DECIMAL (10,4),
  distance_from_planet_in_km DECIMAL (10,4),
  has_water  BOOLEAN,is_habitable BOOLEAN,
  planet_id INT NOT NULL REFERENCES planet(planet_id) ON DELETE CASCADE
  );


-- data insert
INSERT INTO galaxy (name, description, galaxy_type, distance_from_earth_in_light_years) VALUES('Milky Way', 'Our home galaxy', 'Spiral', 0.0),('Andromeda', 'Nearest large galaxy', 'Spiral', 2537000.0),('Triangulum', 'Third-largest in our Local Group', 'Spiral', 3000000.0),('Sombrero', 'Unusual galaxy with a bright nucleus', 'Lenticular', 29000000.0),('Whirlpool', 'Famous for its interaction with a companion galaxy', 'Spiral', 23000000.0),('Black Eye', 'Known for its dark band of dust', 'Spiral', 17000000.0);

--star
INSERT INTO star (name, description, star_type, galaxy_id) VALUES('Sun', 'The star at the center of the Solar System', 'G-Type Main-Sequence', 1),('Sirius', 'Brightest star in the night sky', 'A-Type Main-Sequence', 1),('Betelgeuse', 'A red supergiant in Orion', 'Red Supergiant', 2),('Proxima Centauri', 'Closest known star to the Sun', 'M-Type Main-Sequence', 1),('Rigel', 'Bright blue supergiant in Orion', 'Blue Supergiant', 2),('Vega', 'Brightest star in the Lyra constellation', 'A-Type Main-Sequence', 3);

-- planet
INSERT INTO planet (name, description, planet_type, has_life, galaxy_id, star_id) 
VALUES
('Earth', 'The third planet from the Sun', 'Terrestrial', TRUE, 1, 1),
('Mars', 'Known as the Red Planet', 'Terrestrial', FALSE, 1, 1),
('Venus', 'Earth’s twin due to its size and mass', 'Terrestrial', FALSE, 1, 1),
('Jupiter', 'Largest planet in the Solar System', 'Gas Giant', FALSE, 1, 1),
('Saturn', 'Known for its prominent ring system', 'Gas Giant', FALSE, 1, 1),
('Uranus', 'An ice giant with a unique tilt', 'Ice Giant', FALSE, 1, 1),
('Neptune', 'Farthest planet from the Sun', 'Ice Giant', FALSE, 1, 1),
('Proxima b', 'Exoplanet orbiting Proxima Centauri', 'Terrestrial', FALSE, 1, 4),
('Gliese 581g', 'Potentially habitable exoplanet', 'Terrestrial', FALSE, 2, 5),
('Kepler-22b', 'A planet in the habitable zone', 'Super-Earth', FALSE, 2, 5),
('HD 209458 b', 'First exoplanet discovered in transit', 'Gas Giant', FALSE, 3, 6),
('TRAPPIST-1e', 'One of seven Earth-like planets', 'Terrestrial', FALSE, 3, 6);


-- moon
INSERT INTO moon (name, description, moon_type, radius_in_km, planet_id) 
VALUES
('Moon', 'Earth’s only natural satellite', 'Natural', 1737.4, 1),
('Phobos', 'Mars’s innermost moon', 'Natural', 11.2667, 2),
('Deimos', 'Mars’s outermost moon', 'Natural', 6.2, 2),
('Io', 'Most geologically active body in the Solar System', 'Natural', 1821.6, 4),
('Europa', 'Potential for a subsurface ocean', 'Natural', 1560.8, 4),
('Ganymede', 'Largest moon in the Solar System', 'Natural', 2634.1, 4),
('Callisto', 'Heavily cratered moon of Jupiter', 'Natural', 2410.3, 4),
('Titan', 'Largest moon of Saturn', 'Natural', 2574.7, 5),
('Enceladus', 'Saturn’s moon with active geysers', 'Natural', 252.1, 5),
('Mimas', 'Small moon of Saturn with a giant crater', 'Natural', 198.2, 5),
('Triton', 'Largest moon of Neptune', 'Natural', 1353.4, 7),
('Charon', 'Largest moon of Pluto', 'Natural', 606.0, 6),
('Oberon', 'Uranus’s outermost large moon', 'Natural', 761.4, 6),
('Ariel', 'Brightest moon of Uranus', 'Natural', 578.9, 6),
('Dione', 'Saturn’s moon with an icy surface', 'Natural', 561.4, 5),
('Rhea', 'Saturn’s second-largest moon', 'Natural', 763.8, 5),
('Iapetus', 'Saturn’s moon with a two-tone surface', 'Natural', 735.6, 5),
('Proteus', 'Second-largest moon of Neptune', 'Natural', 210.0, 7),
('Nereid', 'Outer moon of Neptune', 'Natural', 170.0, 7),
('Hyperion', 'Irregular-shaped moon of Saturn', 'Natural', 133.0, 5);

