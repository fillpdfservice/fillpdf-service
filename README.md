# fillpdf-service

This code powers the [FillPDF Service](https://fillpdf-service.com) website.  It's a Drupal site.

## License stuff

If you fork this code, make sure to respect Kaland Web trademarks (change the logo/name and stuff), and also be aware of the root `LICENSE-OVERRIDE.txt` file and the `LICENSE.txt` in the `sites/fillpdf-service.com` directory. Short version: Drupal and contributed module code is released as GPLv3. Original code, which is under `sites/fillpdf-service.com`, is AGPLv3. In practice, you have to share your derived code back to FillPDF Service if you give people access, even over the network. iText's license would generally require you to do this anyway, so this is mostly restating that.

## Setup

You install this like a normal Drupal site. To get something like fillpdf-service.com, you have to turn on the FillPDF module (it's shipped as a Git submodule, so do `git submodule update --init`). Also turn on `fillpdf_support` and `fillpdf_theme`. Revert the Features modules on the `/admin/build/features` page, but note that these are not fully up-to-date, so you're best off creating some of your own site content and pricing plans and configuring your own store if it's for commercial purposes. The structure (a.k.a. code) ought to work.

On the server, you need to install a servlet container that works with JavaBridge (we use Tomcat 6) and set up FillPDF in JavaBridge mode (downloading the package and symlinking). Documentation is at https://drupal.org/documentation/modules/fillpdf.

