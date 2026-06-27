int __usercall sub_6F969B7B@<eax>(int result@<eax>, unsigned int a2@<edx>)
{
  unsigned int v2; // ecx@1
  unsigned int v3; // ebp@1
  signed int v4; // ecx@1
  unsigned int v5; // esi@2
  signed int v6; // ecx@2
  int v7; // eax@7
  signed int v8; // edi@7
  int v9; // eax@10
  int v10; // ebx@14
  int i; // eax@14
  int v12; // edx@18
  int v13; // edx@21
  int v14; // ecx@21
  signed int v15; // esi@21
  int v16; // eax@28
  int v17; // ebx@28
  signed __int64 v18; // rax@30
  int v19; // [sp+18h] [bp-34h]@1
  int v20; // [sp+1Ch] [bp-30h]@1
  int v21; // [sp+20h] [bp-2Ch]@2
  unsigned int v22; // [sp+24h] [bp-28h]@2
  unsigned int v23; // [sp+28h] [bp-24h]@14
  unsigned int v24; // [sp+2Ch] [bp-20h]@2

  v2 = result + 1468 * a2;
  v3 = *(_DWORD *)(v2 + 64);
  v4 = 48 * *(_DWORD *)(v2 + 56);
  v19 = a2 < 1 ? 4 : 8;
  v20 = v3 + v4;
  if ( v3 < v3 + v4 )
  {
    v5 = *(_DWORD *)(result + 28);
    v6 = v4 >> 4;
    v22 = a2;
    v24 = v5 + 40 * *(_DWORD *)(result + 24);
    result = -1431655765 * v6;
    v21 = -1431655765 * v6;
    while ( v5 < v24 )
    {
      result = *(_WORD *)v5;
      if ( !(result & v19) && !(result & 0x10) )
      {
        if ( v22 == 1 )
        {
          v7 = *(_DWORD *)(v5 + 8);
          v8 = *(_WORD *)(v5 + 14);
        }
        else
        {
          v8 = *(_WORD *)(v5 + 12);
          v7 = *(_DWORD *)(v5 + 4);
        }
        if ( *(_WORD *)v3 - v8 < 0 )
        {
          if ( v8 - *(_WORD *)(v20 - 48) < 0 )
          {
            if ( v21 <= 8 )
            {
              for ( i = 0; i < v21 && v8 > *(_WORD *)(v3 + 48 * i); ++i )
                ;
              v12 = v3 + 48 * i;
              if ( v8 == *(_WORD *)v12 )
              {
                v9 = *(_DWORD *)(v12 + 8);
              }
              else
              {
LABEL_28:
                v16 = 48 * i;
                v17 = v3 + v16 - 48;
                if ( !*(_DWORD *)(v17 + 16) )
                  *(_DWORD *)(v17 + 16) = sub_6F7C9760(
                                            *(_DWORD *)(v3 + v16 + 8) - *(_DWORD *)(v17 + 8),
                                            *(_WORD *)(v3 + v16) - *(_WORD *)v17);
                v18 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(v17 + 16)
                                                                    * (signed __int64)(v8 - *(_WORD *)v17)) >> 32) >> 31)
                                   + 0x8000)
                    + *(_DWORD *)(v17 + 16) * (signed __int64)(v8 - *(_WORD *)v17);
                v9 = *(_DWORD *)(v17 + 8) + (HIDWORD(v18) << 16) + ((unsigned int)v18 >> 16);
              }
            }
            else
            {
              v10 = v21;
              i = 0;
              v23 = v5;
              while ( 1 )
              {
                while ( 1 )
                {
                  if ( v10 <= i )
                  {
                    v5 = v23;
                    goto LABEL_28;
                  }
                  v13 = (v10 + i) >> 1;
                  v14 = v3 + 48 * v13;
                  v15 = *(_WORD *)v14;
                  if ( v8 >= v15 )
                    break;
                  v10 = (v10 + i) >> 1;
                }
                if ( v8 <= v15 )
                  break;
                i = v13 + 1;
              }
              v5 = v23;
              v9 = *(_DWORD *)(v14 + 8);
            }
          }
          else
          {
            v9 = *(_DWORD *)(v20 - 40) + v7 - *(_DWORD *)(v20 - 44);
          }
        }
        else
        {
          v9 = *(_DWORD *)(v3 + 8) + v7 - *(_DWORD *)(v3 + 4);
        }
        if ( v22 )
          *(_DWORD *)(v5 + 20) = v9;
        else
          *(_DWORD *)(v5 + 16) = v9;
        result = v19;
        *(_WORD *)v5 |= v19;
      }
      v5 += 40;
    }
  }
  return result;
}
