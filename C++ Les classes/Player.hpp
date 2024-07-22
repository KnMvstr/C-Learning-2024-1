#pragma once
#include <string>

class Player {

private :
	std::string m_Name;
	int m_HitPoints;
	int m_Damages;

public : 
	/*Default Constructor*/
	Player();

	/*Copy Constructor*/
	Player(const Player& player);

	/*Constructor*/
	Player(const std::string& name, int hitPoints, int damages);

	/*Destructor*/
	~Player();

	/*Boolean if is dead*/
	bool isDead();

	/*Attack method*/
	void Attack(Player& otherPlayer);

	/*Getter Setter*/
	//Get Name HitPoints Damages
	const std::string& GetName() const;
	int GetHitPoints() const;
	int GetDamages() const;
	//Set Name HitPoint Damages
	void SetDamages(int damages);

};