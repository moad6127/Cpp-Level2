#include<iostream>


//SmartPointer
// unique_ptr
//활용 : 음악앱
//class Song
//{
//public:
//	int mTrackNo;
//	std::string mTitel;
//
//	Song(int trackNo, std::string title) : mTrackNo{ trackNo }, mTitel{ title }
//	{
//
//	}
//};
//void DoSomething(Song* s)
//{
//
//}
//int main()
//{
//	//std::unique_ptr<Song>spSong{ new Song(1,"BattleBGM") };
//
//	std::unique_ptr<Song> spSong{ std::make_unique<Song>(1,"BattleBGM")};
//
//	std::cout << spSong->mTrackNo<< " : "<<spSong->mTitel<<std::endl;
//
//	spSong.get(); // Song*형태로 반환시켜주는 기능
//	DoSomething(spSong.get()); 
//}

// shared ptr
class Image
{
	//그림파일
public:
	Image()
	{
		std::cout << "[+] Image" << std::endl;
	}
	~Image()
	{
		std::cout << "[-] Image" << std::endl;
	}
};
class Bug
{
	std::shared_ptr<Image> mspImage;
public:
	Bug(std::shared_ptr<Image> image) : mspImage{image}
	{
		std::cout << "[+] Bug" << std::endl;
	}
	~Bug()
	{
		std::cout << "[-] Bug" << std::endl;
	}

};
int main()
{
	std::shared_ptr<Image> spImage{std::make_shared<Image>()};

	std::cout << spImage.use_count() << std::endl;
	{
		auto spBug1 = std::make_unique<Bug>(spImage);
		std::cout << spImage.use_count() << std::endl;
		{
			auto spBug2 = std::make_unique<Bug>(spImage);
			std::cout << spImage.use_count() << std::endl;
			{
				auto spBug3 = std::make_unique<Bug>(spImage);
				std::cout << spImage.use_count() << std::endl;
			}
			std::cout << spImage.use_count() << std::endl;
		}
		std::cout << spImage.use_count() << std::endl;
	}
	std::cout << spImage.use_count() << std::endl;
}