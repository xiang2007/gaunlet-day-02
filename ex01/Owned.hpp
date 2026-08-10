#pragma once

struct Enemy { int hp = 100; };

class Owned
{
	public:
		Owned();
		Owned(const Owned& ot);
		Owned &operator=(const Owned& ot);
		~Owned();

		Enemy* e() const;
	private:
		Enemy *m_e;
};
