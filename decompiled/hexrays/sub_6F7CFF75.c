void __fastcall sub_6F7CFF75(int a1, unsigned int a2)
{
  JUMPOUT((a2 >> 4) + 8, *(_DWORD *)(a1 + 16), sub_6F7CFAFC);
  *(_DWORD *)a1 = 13;
  *(_DWORD *)(a1 + 4) = 5;
  JUMPOUT(&loc_6F7CFB71);
}
