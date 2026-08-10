#pragma once

struct Enemy { int hp = 100; };

class Owned
{
	public:
		Owned();
		Owned(const Owned& ot) = delete;
		Owned &operator=(const Owned& ot) = delete;
		~Owned();

		Enemy* operator->() const;
	private:
		Enemy *m_e;
};
