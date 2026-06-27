signed int __cdecl sub_6F75A5F0(int a1, size_t a2)
{
  void *v2; // eax@1
  int v3; // ecx@1
  signed int result; // eax@2

  v2 = malloc(a2);
  v3 = 7 * a1;
  dword_70259320[7 * a1] = (int)v2;
  if ( v2 )
  {
    dword_70259324[v3] = a2;
    result = 0;
    dword_7025932C[v3] = 0;
    dword_70259330[v3] = 0;
    dword_70259328[v3] = 0;
    dword_70259334[v3] = 0;
    dword_70259338[v3] = 0;
  }
  else
  {
    result = -1;
  }
  return result;
}
