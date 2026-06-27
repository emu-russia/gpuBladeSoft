int __usercall sub_6F897050@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // edi@1
  int v3; // ebx@1
  int v4; // esi@1
  _BYTE *i; // eax@1
  int v6; // eax@2

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 40);
  for ( i = *(_BYTE **)(a1 + 12); *i == 66; i = *(_BYTE **)(v3 + 12) )
  {
    *(_DWORD *)(v3 + 12) = i + 1;
    v6 = sub_6F896ED0(v3);
    v2 = sub_6F896B60(v3, 75, v2, v6);
  }
  *(_DWORD *)(v3 + 40) = v4;
  return v2;
}
