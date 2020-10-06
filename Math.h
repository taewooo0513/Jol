#pragma once
class Math : public singleton<Math>
{
public:
	Math() {};
	~Math() {};
public:
	float Amplitude = 40;
	float WaveLength = 100;
	float Frequency = 1 / WaveLength;
	float Octave = 10;
	float Persistence = 5;
	FLOAT Noise1(FLOAT x, FLOAT y)
	{
		int n = x + y * 57;
		int z = (n << 13) ^ n;
		return (1.0 - ((z*(z*z * 15731 + 789221) + 1376312589) & 0x7fffffff) / 1073741824.0);
	}
	FLOAT SmoothNoise(FLOAT x, FLOAT y)
	{

	}
};

#define MATH Math::GetInstance()