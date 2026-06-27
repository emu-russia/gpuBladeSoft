char *__cdecl sub_6F869134(int a1, unsigned int a2, char a3, int a4, int a5, int a6)
{
  int v6; // ebx@1
  int v7; // eax@2
  char *result; // eax@3

  v6 = *(_DWORD *)(a1 + 4);
  if ( a2 != 1 )
  {
    v7 = *(_DWORD *)a1;
    *(_DWORD *)(v7 + 20) = 15;
    *(_DWORD *)(v7 + 24) = a2;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  result = sub_6F868FC4(a1, a2, 0x78u);
  *(_DWORD *)result = 0;
  *((_DWORD *)result + 1) = a5;
  *((_DWORD *)result + 2) = a4;
  *((_DWORD *)result + 3) = a6;
  result[32] = a3;
  result[34] = 0;
  *((_DWORD *)result + 9) = *(_DWORD *)(v6 + 72);
  *(_DWORD *)(v6 + 72) = result;
  return result;
}
