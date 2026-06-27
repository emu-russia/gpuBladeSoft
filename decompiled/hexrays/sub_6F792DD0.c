signed int __usercall sub_6F792DD0@<eax>(unsigned int *a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>, char *a4, int a5)
{
  _BYTE *v5; // esi@1
  unsigned int v6; // edx@1
  char v7; // al@2
  _BYTE *v8; // ebx@4
  char *v9; // edi@6
  int v10; // ebp@6
  _BYTE *v11; // edx@16
  char *v13; // eax@24
  _DWORD *v14; // ST04_4@26
  int v15; // eax@26
  bool v16; // zf@26
  char v17; // [sp+3h] [bp-39h]@3
  int v18; // [sp+8h] [bp-34h]@1
  unsigned int *v19; // [sp+Ch] [bp-30h]@1
  _BYTE *v20; // [sp+18h] [bp-24h]@1
  char v21; // [sp+1Ch] [bp-20h]@24

  v5 = a2;
  v6 = *a1;
  v19 = a1;
  v18 = a3;
  v20 = (_BYTE *)v6;
  if ( v6 >= (unsigned int)v5 )
    goto LABEL_31;
  v7 = *(_BYTE *)v6;
  if ( *(_BYTE *)v6 == 91 )
  {
    v17 = 93;
  }
  else
  {
    v17 = 125;
    if ( v7 != 123 )
    {
      v8 = (_BYTE *)v6;
      v17 = 0;
      goto LABEL_6;
    }
  }
  v8 = (_BYTE *)(v6 + 1);
  v20 = (_BYTE *)(v6 + 1);
  if ( (unsigned int)v5 <= v6 + 1 )
  {
    ++v6;
LABEL_31:
    *v19 = v6;
    return 0;
  }
  v7 = *(_BYTE *)(v6 + 1);
LABEL_6:
  v9 = a4;
  v10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)(v7 - 12) <= 1u || (unsigned __int8)(v7 - 9) <= 1u || !(v7 & 0xDF) )
        goto LABEL_16;
      if ( v7 != 37 )
        break;
      if ( v5 > v8 )
      {
        while ( v5 != ++v8 )
        {
          if ( *v8 == 13 || *v8 == 10 )
            goto LABEL_16;
        }
        v8 = v5;
      }
LABEL_16:
      v11 = v8 + 1;
      if ( v5 <= v8 + 1 )
        goto LABEL_19;
      v7 = (v8++)[1];
    }
    v20 = v8;
    if ( v5 <= v8 )
      goto LABEL_33;
    if ( *v8 == v17 )
    {
      v11 = v8 + 1;
LABEL_19:
      *v19 = (unsigned int)v11;
      return v10;
    }
    if ( a4 && v18 <= v10 )
    {
LABEL_33:
      *v19 = (unsigned int)v8;
      return v10;
    }
    v13 = &v21;
    if ( a4 )
      v13 = v9;
    v14 = v13;
    v15 = sub_6F792040(&v20, v5, a5);
    v11 = v20;
    v16 = v20 == v8;
    *v14 = v15;
    if ( v16 )
      break;
    ++v10;
    if ( !v17 || v5 <= v11 )
      goto LABEL_19;
    v9 += 4;
    v7 = *v11;
    v8 = v11;
  }
  *v19 = (unsigned int)v8;
  return -1;
}
