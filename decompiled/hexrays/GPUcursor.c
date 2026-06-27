int __stdcall GPUcursor(char a1, int a2, int a3)
{
  int result; // eax@1

  result = a1 & 7;
  dword_70058480[2 * result] = a2;
  dword_70058484[2 * result] = a3;
  dword_70058460[result] = 60;
  return result;
}
