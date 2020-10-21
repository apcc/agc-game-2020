#include <Siv3D.hpp> // OpenSiv3D v0.4.3
#include <common.hpp>
#include <scenes.hpp>

void Main()
{
	FontAsset::Register(U"TitleFont", 60, Typeface::Heavy);

	App manager;

	registerScenes(manager);

	while(System::Update())
	{
		if (!manager.update()) break;
	}
}
