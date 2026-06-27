int __usercall sub_6F897E00@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v2; // ebx@1
  char *v3; // edx@1
  int v4; // edi@1
  char v5; // al@1
  int *v6; // esi@2
  int v7; // eax@4
  int v8; // eax@6
  int v9; // ebp@11
  _BYTE *v10; // edx@11
  int result; // eax@15
  int v12; // [sp+1Ch] [bp-20h]@2

  v2 = a1;
  v3 = *(char **)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 40);
  v5 = *v3;
  if ( *v3 != 69 )
  {
    v12 = 0;
    v6 = &v12;
    while ( 1 )
    {
      if ( v5 == 76 )
      {
        v7 = sub_6F897550(v2);
        goto LABEL_5;
      }
      if ( v5 <= 76 )
        break;
      if ( v5 != 88 )
        goto LABEL_14;
      v9 = *(_DWORD *)(v2 + 48);
      *(_DWORD *)(v2 + 48) = 1;
      *(_DWORD *)(v2 + 12) = v3 + 1;
      v7 = sub_6F8976D0(v2, a2);
      v10 = *(_BYTE **)(v2 + 12);
      *(_DWORD *)(v2 + 48) = v9;
      if ( *v10 != 69 )
        return 0;
      *(_DWORD *)(v2 + 12) = v10 + 1;
LABEL_5:
      if ( !v7 )
        return 0;
      v8 = sub_6F896B60(v2, 47, v7, 0);
      *v6 = v8;
      if ( !v8 )
        return 0;
      v3 = *(char **)(v2 + 12);
      v6 = (int *)(v8 + 12);
      v5 = *v3;
      if ( *v3 == 69 )
      {
        *(_DWORD *)(v2 + 40) = v4;
        result = v12;
        *(_DWORD *)(v2 + 12) = v3 + 1;
        return result;
      }
    }
    if ( (unsigned __int8)(v5 - 73) <= 1u )
    {
      v7 = sub_6F897F10(v2);
      goto LABEL_5;
    }
LABEL_14:
    v7 = sub_6F898420(v2);
    goto LABEL_5;
  }
  *(_DWORD *)(v2 + 12) = v3 + 1;
  return sub_6F896B60(v2, 47, 0, 0);
}
