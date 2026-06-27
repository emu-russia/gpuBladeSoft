int __usercall sub_6F898EE0@<eax>(int a1@<eax>)
{
  int v1; // ebp@1
  char v2; // dl@1
  int v3; // ebx@2
  int *v4; // esi@2
  int v5; // eax@4
  int v6; // eax@10
  int result; // eax@11
  int v8; // edx@15
  int v9; // edx@16
  int v10; // [sp+1Ch] [bp-20h]@1

  v1 = *(_DWORD *)(a1 + 12);
  v10 = 0;
  v2 = *(_BYTE *)v1;
  if ( v2 == 0 || v2 == 69 )
    goto LABEL_11;
  v3 = a1;
  v4 = &v10;
  if ( v2 == 46 )
    goto LABEL_11;
  do
  {
    if ( (v2 == 82 || v2 == 79) && *(_BYTE *)(v1 + 1) == 69 )
      break;
    v6 = sub_6F898420(v3);
    if ( !v6 )
      goto LABEL_11;
    v5 = sub_6F896B60(v3, 46, v6, 0);
    *v4 = v5;
    if ( !v5 )
      goto LABEL_11;
    v1 = *(_DWORD *)(v3 + 12);
    v4 = (int *)(v5 + 12);
    v2 = *(_BYTE *)v1;
    if ( v2 == 69 || v2 == 0 )
      break;
  }
  while ( v2 != 46 );
  result = v10;
  if ( !v10 )
  {
LABEL_11:
    result = 0;
  }
  else if ( !*(_DWORD *)(v10 + 12) )
  {
    v8 = *(_DWORD *)(v10 + 8);
    if ( *(_DWORD *)v8 == 39 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( *(_DWORD *)(v9 + 16) == 9 )
      {
        *(_DWORD *)(v3 + 44) -= *(_DWORD *)(v9 + 4);
        *(_DWORD *)(result + 8) = 0;
      }
    }
  }
  return result;
}
