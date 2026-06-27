void __usercall sub_6F7B312C(int a1@<eax>, int a2@<ebx>)
{
  unsigned int v2; // edx@1
  int v3; // eax@3

  a1 = (unsigned __int16)a1;
  v2 = *(_WORD *)(a2 + 298) < 1u ? -17 : -25;
  if ( !*(_WORD *)(a2 + 300) )
    v2 = -(*(_WORD *)(a2 + 298) < 1u) | 0xFFFFFFF7;
  *(_BYTE *)(*(_DWORD *)(a2 + 60) + a1) &= v2;
  v3 = *(_DWORD *)(a2 + 12);
  JUMPOUT(&loc_6F7B0D90);
}
