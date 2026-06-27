int __usercall sub_6F8A18E0@<eax>(int a1@<eax>, int **a2@<edx>, signed int *a3@<ecx>)
{
  int **v3; // edi@1
  signed int v4; // esi@1
  int v5; // ebx@1
  int *v6; // eax@1
  int *v7; // eax@3
  int (__cdecl *v8)(signed int, signed int, _DWORD, _DWORD, int, int **); // ebp@4
  int result; // eax@6
  int v10; // ecx@8
  int v11; // eax@8
  int v12; // ST28_4@9
  int (__cdecl *v13)(signed int, signed int, _DWORD, _DWORD, int, int **, int); // [sp+20h] [bp-2Ch]@1
  int v14; // [sp+24h] [bp-28h]@1
  signed int *v15; // [sp+2Ch] [bp-20h]@1

  v3 = a2;
  v4 = 1;
  v5 = a1;
  v15 = a3;
  v13 = *(int (__cdecl **)(signed int, signed int, _DWORD, _DWORD, int, int **, int))(a1 + 12);
  v14 = *(_DWORD *)(a1 + 16);
  v6 = *a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      v8 = (int (__cdecl *)(signed int, signed int, _DWORD, _DWORD, int, int **))v6[6];
      if ( v13(1, 10, *(_DWORD *)v5, *(_DWORD *)(v5 + 4), v5, v3, v14) )
        return 2;
      if ( v8 )
      {
        result = v8(1, 10, *(_DWORD *)v5, *(_DWORD *)(v5 + 4), v5, v3);
        if ( result == 7 )
          goto LABEL_15;
        if ( result != 8 )
          return 2;
      }
      v10 = **v3;
      v11 = dword_6FB48A44;
      if ( dword_6FB48A44 < 0 )
      {
        v12 = **v3;
        sub_6F8A1780();
        v11 = dword_6FB48A44;
        v10 = v12;
      }
      if ( v11 )
      {
        ++v4;
        sub_6F8B4920(dword_70372B88, v10);
        v6 = (int *)**v3;
        *v3 = v6;
        if ( !v6 )
          break;
      }
      else
      {
        v7 = *v3;
        dword_70372B8C = v10;
        ++v4;
        v6 = (int *)*v7;
        *v3 = v6;
        if ( !v6 )
          break;
      }
    }
  }
  if ( v13(1, 26, *(_DWORD *)v5, *(_DWORD *)(v5 + 4), v5, v3, v14) )
    return 2;
  result = 5;
LABEL_15:
  *v15 = v4;
  return result;
}
