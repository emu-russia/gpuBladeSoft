void __usercall sub_6F7B3D23(unsigned __int16 a1@<ax>, unsigned __int16 a2@<dx>, int a3@<esi>)
{
  int v3; // ecx@1
  int v4; // edx@1
  int v5; // [sp+4h] [bp+4h]@1
  int v6; // [sp+8h] [bp+8h]@1

  v3 = *(_DWORD *)(a3 + 52) + 8 * a2;
  v4 = *(_DWORD *)(a3 + 88) + 8 * a1;
  v6 = *(_DWORD *)(v3 + 4) - *(_DWORD *)(v4 + 4);
  v5 = *(_DWORD *)v3 - *(_DWORD *)v4;
  JUMPOUT(&loc_6F7B30EF);
}
