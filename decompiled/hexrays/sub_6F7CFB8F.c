void __cdecl sub_6F7CFB8F(int a1, int a2, int a3, int a4, int a5, char *a6, int a7)
{
  int v7; // ecx@0
  char v8; // al@1

  JUMPOUT(a7, 0, sub_6F7CFF52);
  v8 = *a6;
  *(_DWORD *)(v7 + 4) = (unsigned __int8)*a6;
  JUMPOUT(v8 & 0xF, 8, sub_6F7CFF75);
  *(_DWORD *)v7 = 13;
  *(_DWORD *)(v7 + 4) = 5;
  JUMPOUT(&loc_6F7CFB71);
}
