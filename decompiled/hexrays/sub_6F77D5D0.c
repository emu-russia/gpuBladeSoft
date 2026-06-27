signed int __usercall sub_6F77D5D0@<eax>(int a1@<eax>, int *a2@<edx>, unsigned int a3@<ecx>, int a4)
{
  int v4; // esi@1
  int v5; // eax@1
  signed int result; // eax@2
  int v7; // edx@4
  int v8; // ecx@4
  int v9; // edx@6
  _WORD *v10; // edi@6
  int v11; // ebp@8
  __int16 v12; // cx@8
  signed int v13; // edx@9
  int v14; // [sp+10h] [bp-2Ch]@2
  int v15; // [sp+14h] [bp-28h]@2
  int v16; // [sp+18h] [bp-24h]@2
  int v17; // [sp+1Ch] [bp-20h]@2

  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(_DWORD *)(a4 + 8) = 0;
  *(_DWORD *)(a4 + 12) = 0;
  v4 = *(_DWORD *)a1;
  v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 128) + 48);
  if ( v5 )
  {
    result = (**(int (__cdecl ***)(_DWORD, unsigned int, int *))v5)(*(_DWORD *)(v5 + 4), a3, &v16);
    v14 = v16;
    v15 = v17;
LABEL_3:
    if ( !result )
    {
      v7 = v14;
      v8 = v14 + v15;
      *(_DWORD *)(a4 + 4) = v14;
      *(_DWORD *)(a4 + 12) = v7;
      *(_DWORD *)(a4 + 8) = v8;
    }
    return result;
  }
  v9 = *a2;
  result = 18;
  v10 = *(_WORD **)(v9 + 1160);
  if ( v10 )
  {
    if ( a3 <= 0xFF )
    {
      v11 = *(_DWORD *)(v9 + 12);
      v12 = dword_6FB56960[a3];
      if ( v11 )
      {
        v13 = 0;
        if ( v12 != *v10 )
        {
          do
          {
            if ( v11 == ++v13 )
              return 18;
          }
          while ( v12 != v10[v13] );
          if ( v13 < 0 )
            return 18;
        }
        result = sub_6F77D330(*(_DWORD *)(v4 + 656) + 1176, v13, &v14, &v15);
        goto LABEL_3;
      }
    }
  }
  return result;
}
