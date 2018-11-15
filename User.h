#ifndef USER_H
#define USER_H

class User {

private:
	string name;
	Date birth;
	string email;
	vector<Project*> projects;

public:
	User(string name, Date birth, string email);

	Date getBirth() const;

	string getEmail() const;

	vector<Project*> getProjects() const;

	string getName() const;

	unsigned int getRanking(string projectName) const;

	unsigned int getRanking(string initialDate, string finalDate) const;

	void operation();
};

#endif