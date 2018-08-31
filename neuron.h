template <const int maxin = 5>
class neuron
{
	private:
		int pos=0;
	public:
	double w[maxin];
	double val[maxin];
	double b=0; 
	neuron(void)
	{
		for(int i=0;i<maxin;i++)
		{
			w[i]=(double)(rand() % 200 -100+ 1)/100;
		}
	}
	void init(void)
	{
		for(int i=0;i<maxin;i++)
		{
			w[i]=(double)(rand() % 200 -100+ 1)/100;
		}
	}
	void input(double value)
	{
		val[pos]=value;
		pos++;
	}
	double sigma()
	{
		double sum=0.00;
		for(int i=0;i<maxin;i++)
		{
			sum+=w[i]*val[i];
		}
		return sum;
	}
	inline double sigmoid(double n)
	{
		return (1/(1-exp(n)));
	}
	inline void learn(int rval,int val)
	{
		w[0]+=(rval-val);
	}
};

