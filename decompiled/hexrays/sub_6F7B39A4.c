void __usercall sub_6F7B39A4(int a1@<eax>, int a2@<esi>)
{
  int v2; // eax@1
  int v3; // [sp+4h] [bp+4h]@1
  int v4; // [sp+8h] [bp+8h]@1

  v2 = *(_DWORD *)(a2 + 120) + 8 * a1;
  v4 = *(_DWORD *)(v2 + 4);
  v3 = *(_DWORD *)v2;
  JUMPOUT(&loc_6F7B1569);
}
