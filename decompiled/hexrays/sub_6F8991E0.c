int __usercall sub_6F8991E0@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx@1
  _BYTE *v3; // eax@1
  int v4; // esi@3
  int v5; // eax@4

  v2 = a1;
  v3 = *(_BYTE **)(a1 + 12);
  if ( *v3 == 74 )
  {
    *(_DWORD *)(v2 + 12) = v3 + 1;
    goto LABEL_3;
  }
  if ( a2 )
  {
LABEL_3:
    v4 = sub_6F898420(v2);
    if ( v4 )
    {
      v5 = sub_6F898EE0(v2);
      if ( v5 )
        return sub_6F896B60(v2, 41, v4, v5);
    }
    return 0;
  }
  v4 = 0;
  v5 = sub_6F898EE0(v2);
  if ( v5 )
    return sub_6F896B60(v2, 41, v4, v5);
  return 0;
}
