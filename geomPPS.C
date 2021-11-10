//script drawing a detector geometry (here ALICE)
//by default the geometry is drawn using the GL viewer
//Using the TBrowser, you can select other components
//if the file containing the geometry is not found in the local
//directory, it is automatically read from the ROOT web site.
// Author: Rene Brun
      
void geomAlice()
{
   TGeoManager::Import("cmsSimGeom-PPSrun3_FixPixels.root");
   gGeoManager->DefaultColors();
//   gGeoManager->SetVisLevel(4);

   gGeoManager->GetVolume("ALIC")->Draw("ogl");
   new TBrowser;
}
