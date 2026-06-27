int __usercall sub_6F8B8620@<eax>(int a1@<eax>, int a2@<edx>)
{
  char v2; // bl@1
  unsigned __int8 v3; // cl@2
  int v4; // ecx@6
  int v6; // [sp+1Ch] [bp-10h]@7

  v2 = *(_BYTE *)(a1 + 20);
  if ( v2 == -1 )
  {
    v4 = 0;
    goto LABEL_7;
  }
  v3 = v2 & 7;
  if ( (v2 & 7) == 2 )
  {
    v4 = -2 * a2;
    goto LABEL_7;
  }
  if ( v3 <= 2u )
  {
    if ( v3 )
LABEL_12:
      abort();
LABEL_9:
    v4 = -4 * a2;
    goto LABEL_7;
  }
  if ( v3 == 3 )
    goto LABEL_9;
  if ( v3 != 4 )
    goto LABEL_12;
  v4 = -8 * a2;
LABEL_7:
  sub_6F8B8900(v2, *(_DWORD ***)(a1 + 8), (_DWORD **)(*(_DWORD *)(a1 + 12) + v4), (char **)&v6);
  return v6;
}
