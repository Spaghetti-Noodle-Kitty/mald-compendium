
#pragma once
class zFileSys
{
public:
	enum ShellFolder {
		AdminTools = 48,
		AltStartup = 29,
		AppData = 26,
		BitBucket = 10,
		CommonAdminTools = 47,
		CommonAltStartup = 30,
		CommonAppData = 35,
		CommonDesktop = 25,
		CommonDocuments = 46,
		CommonFavorites = 31,
		CommonPrograms = 23,
		CommonStartMenu = 22,
		CommonStartUp = 24,
		CommonTemplates = 45,
		Controls = 3,
		Cookies = 33,
		Desktop = 0,
		DesktopDirectory = 16,
		Drives = 17,
		Favorites = 6,
		Fonts = 20,
		History = 34,
		Internet = 1,
		InternetCache = 32,
		LocalAppData = 28,
		MyPictures = 39,
		NetNeighborhood = 19,
		Network = 18,
		Personal = 5,
		Printers = 4,
		PrintNeighborhood = 27,
		Profile = 40,
		ProgramFiles = 38,
		CommonProgramFiles = 43,
		CommonProgramFiles86 = 44,
		ProgramFiles86 = 42,
		Programs = 2,
		Recent = 8,
		SendTo = 9,
		StartMenu = 11,
		StartUp = 7,
		System = 37,
		System86 = 41,
		Templates = 21,
		Windows = 36
	};
	static std::string GetShellDirectoryPath(ShellFolder Folder);
	
};

