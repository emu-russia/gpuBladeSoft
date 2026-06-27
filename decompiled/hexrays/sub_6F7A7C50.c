int __usercall sub_6F7A7C50@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  unsigned int v3; // ecx@1
  int v4; // edx@3
  int v5; // ebx@5
  int v6; // ebp@6
  signed int v7; // ebx@8
  int v8; // esi@12
  int v9; // ebx@14
  bool v10; // zf@15
  int v11; // edi@17
  int v12; // edi@20
  int v13; // edi@21
  int v14; // esi@21
  int v15; // [sp+10h] [bp-2Ch]@11
  int v16; // [sp+14h] [bp-28h]@11
  int *v17; // [sp+18h] [bp-24h]@14
  int v18; // [sp+1Ch] [bp-20h]@20

  v3 = a3 - *(_DWORD *)(result + 80);
  if ( *(_DWORD *)(result + 76) <= a2 )
    a2 = *(_DWORD *)(result + 76);
  v4 = a2 - *(_DWORD *)(result + 72);
  if ( v4 < 0 )
    v4 = -1;
  v5 = *(_DWORD *)(result + 64);
  if ( v4 != v5 || v3 != *(_DWORD *)(result + 68) )
  {
    v6 = *(_DWORD *)(result + 104);
    if ( !v6 )
    {
      v15 = *(_DWORD *)(result + 96);
      v16 = *(_DWORD *)(result + 100);
      if ( *(_QWORD *)(result + 96) )
      {
        v8 = *(_DWORD *)(result + 88);
        if ( v5 <= v8 )
          v8 = *(_DWORD *)(result + 64);
        v9 = *(_DWORD *)(*(_DWORD *)(result + 1328) + 4 * *(_DWORD *)(result + 68));
        v17 = (int *)(*(_DWORD *)(result + 1328) + 4 * *(_DWORD *)(result + 68));
        if ( v9 && (v10 = *(_DWORD *)v9 == v8, *(_DWORD *)v9 <= v8) )
        {
          while ( !v10 )
          {
            v11 = v9 + 12;
            v9 = *(_DWORD *)(v9 + 12);
            if ( v9 )
            {
              v10 = *(_DWORD *)v9 == v8;
              if ( *(_DWORD *)v9 <= v8 )
                continue;
            }
            v17 = (int *)v11;
            goto LABEL_20;
          }
          v6 = *(_DWORD *)(v9 + 8);
          v14 = *(_DWORD *)(v9 + 4);
          v13 = v9;
        }
        else
        {
LABEL_20:
          v12 = *(_DWORD *)(result + 116);
          v18 = *(_DWORD *)(result + 116);
          if ( v12 >= *(_DWORD *)(result + 112) )
            longjmp(result, 1);
          *(_DWORD *)(result + 116) = v12 + 1;
          v13 = *(_DWORD *)(result + 108) + 16 * v18;
          *(_DWORD *)v13 = v8;
          *(_DWORD *)(v13 + 8) = 0;
          *(_DWORD *)(v13 + 4) = 0;
          *(_DWORD *)(v13 + 12) = v9;
          *v17 = v13;
          v14 = 0;
        }
        *(_DWORD *)(v13 + 8) = v6 + v15;
        *(_DWORD *)(v13 + 4) = v16 + v14;
      }
    }
    *(_DWORD *)(result + 96) = 0;
    *(_DWORD *)(result + 100) = 0;
    *(_DWORD *)(result + 64) = v4;
    *(_DWORD *)(result + 68) = v3;
  }
  v7 = 1;
  if ( *(_DWORD *)(result + 92) > v3 )
  {
    v7 = v4 < *(_DWORD *)(result + 88);
    LOBYTE(v7) = v4 >= *(_DWORD *)(result + 88);
  }
  *(_DWORD *)(result + 104) = v7;
  return result;
}
