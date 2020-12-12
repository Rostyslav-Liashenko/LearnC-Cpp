class Cvaluta {
	char id[4];
	float kilk;
	float kurs;
	int norma;
	
	public:
		Cvaluta(char *, float, float, int);
		~Cvaluta();
		Cvaluta(Cvaluta&);
		void Print();
		float GetEquivalent();
		int CompareEquivalent(Cvaluta&);
		int GetNorma();
		float GetKurs();
		float GetKilk();
		char* GetID();
			void SetNorma(int);
		void SetKurs(float);
		void SetKilk(float);
		void SetID(char*);
};
