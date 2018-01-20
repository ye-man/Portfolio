/*
PackageRenamer.cpp : Defines the entry point for the console application.
Author: Rachel Soderberg
Date Created: January 20, 2018
Latest Edit: January 20, 2018

Description: PackageRenamer is a console program intended to be used on MAC OS X to bulk
             process packages (folders) and the file content contained within each package.
			 Each row (beginning with row 6) is a unique asset (package).

Required Files: (Currently contained in "Files" within PackageRenamer folder)
	- FUSE_20_HR_February_2018_V1_01192018.xlsm
	- ADI.DTD (This is an XML Document)
	- Fuse_VOD_105x147.jpg
	- Fuse_VOD_Logo_320x240px.bmp

Steps: 1. Take in Excel spreadsheet name.
	   2. Open Excel spreadsheet, confirm it exists and is not empty.
       3. Create packages corresponding to column N until end of file (or until coord == " "?).
			Note: Packages are always FUSE00.
       4. Open folder containing ADI.DTD, .bmp, and .jpg files
       5. Copy ADI.DTD, .bmp, and .jpg into each package.
			Note: ADI.DTD will not be modified further; no rename necessary.
	   6. Close containing folder.
	   7. Rename .bmp corresponding to column S until end of file (or until coord == " "?).
			Note: .bmp are always FUSE04.
	   8. Rename .jpg corresponding to column T until end of file (or until coord == " "?).
			Note: .jpg are always FUSE05.
	   9. Close each folder after rename is complete.
	   10. Close Excel spreadsheet.
	   11. Close anything else that may be open?
*/

#include "stdafx.h"


int main()
{

    return 0;
}

