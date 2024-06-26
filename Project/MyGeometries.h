#pragma once

// 
// MyGeometries.h   ---  Header file for MyGeometries.cpp.
// 
//   Sets up and renders 
//     - the ground plane, and
//     - the surface of rotation
//   for the Math 155A project #4.
//
//

//
// Function Prototypes
//
void MySetupSurfaces();                // Called once, before rendering begins.
void SetupForTextures();               // Loads textures, sets Phong material
void MyRemeshGeometries();             // Called when mesh changes, must update resolutions.
void SamsRemeshCircularSurf();      // Update resolution of the surface of rotation.

void MyRenderGeometries();            // Called to render the two surfaces
void SamsRenderCircularSurf();      // Renders the meshed circular surface
//void RenderPlanet(LinearMapR4 viewMatrix, int translate, double scale, double tiltAngle, int totalHourOfDay,
//    int currentHourOfDay, int totalDayOfYear, int currentDayOfYear, int material, int texture);


