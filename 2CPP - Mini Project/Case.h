#pragma once
class Case
{
public:
	Case();
	~Case();
	bool GetBroken();
	void SetBroken(const bool& b);
	bool GetFree();
	void SetFree(const bool& f);
private:
	bool broken;
	bool free;
};

