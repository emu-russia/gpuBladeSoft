int __cdecl sub_6F7601D0(int a1, unsigned int a2)
{
  unsigned int v2; // ebx@1
  void *v3; // eax@1
  int v4; // ebx@2

  v2 = (a2 < 1) + a2 - 1;
  v3 = malloc(a1 + v2 + 4);
  if ( v3 )
  {
    v4 = ((unsigned int)v3 + v2 + 4) & ~v2;
    *(_DWORD *)(v4 - 4) = v3;
  }
  else
  {
    v4 = 0;
  }
  return v4;
}
