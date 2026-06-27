void __usercall sub_6F7B3110(int a1@<eax>, _DWORD *a2@<edi>, int a3@<esi>)
{
  int v3; // ebx@1
  int v4; // esi@1
  int v5; // eax@1

  v3 = a3;
  *a2 = *(_DWORD *)(*(_DWORD *)(a3 + 472) + 4 * a1);
  v4 = *(_DWORD *)(a3 + 32);
  v5 = *(_BYTE *)(v3 + 376);
  JUMPOUT(&loc_6F7B10EA);
}
