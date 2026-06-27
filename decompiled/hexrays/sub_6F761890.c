BOOL __cdecl sub_6F761890(int a1)
{
  int *v1; // ebx@1
  BOOL result; // eax@1

  v1 = &dword_70364500[10 * a1];
  result = QueryPerformanceCounter((LARGE_INTEGER *)&dword_70364500[10 * a1]);
  v1[2] = 0;
  v1[3] = 0;
  v1[4] = 0;
  v1[5] = 0;
  v1[8] = 0;
  return result;
}
