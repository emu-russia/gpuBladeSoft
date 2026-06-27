signed int __usercall sub_6F7A7210@<eax>(int a1@<eax>)
{
  int v2; // eax@4
  int v3; // ebx@4
  int v4; // edi@5
  int v5; // edx@6
  int *v6; // eax@8
  int v7; // eax@8
  bool v8; // zf@9
  int v9; // ecx@11
  int v10; // ST468C_4@15
  int v11; // esi@15
  int v12; // edx@15
  int v13; // [sp+4690h] [bp-38h]@14
  int *v14; // [sp+4694h] [bp-34h]@8
  int v15; // [sp+4698h] [bp-30h]@5
  int v16; // [sp+469Ch] [bp-2Ch]@1
  signed int v17; // [sp+46ACh] [bp-1Ch]@2

  v16 = a1;
  if ( setjmp3(a1, 0) )
  {
    v17 = 64;
  }
  else
  {
    v2 = sub_6F76F8A0(v16 + 1044, (int)off_6FB69154, v16);
    v3 = *(_DWORD *)(v16 + 104);
    v17 = v2;
    if ( !v3 )
    {
      v4 = *(_DWORD *)(v16 + 96);
      v15 = *(_DWORD *)(v16 + 100);
      if ( *(_QWORD *)(v16 + 96) )
      {
        v5 = *(_DWORD *)(v16 + 64);
        if ( v5 > *(_DWORD *)(v16 + 88) )
          v5 = *(_DWORD *)(v16 + 88);
        v6 = (int *)(*(_DWORD *)(v16 + 1328) + 4 * *(_DWORD *)(v16 + 68));
        v14 = v6;
        v7 = *v6;
        if ( v7 && (v8 = v5 == *(_DWORD *)v7, v5 >= *(_DWORD *)v7) )
        {
          while ( !v8 )
          {
            v9 = v7 + 12;
            v7 = *(_DWORD *)(v7 + 12);
            if ( v7 )
            {
              v8 = *(_DWORD *)v7 == v5;
              if ( *(_DWORD *)v7 <= v5 )
                continue;
            }
            v14 = (int *)v9;
            goto LABEL_14;
          }
          v3 = *(_DWORD *)(v7 + 8);
          v12 = *(_DWORD *)(v7 + 4);
          v11 = v7;
        }
        else
        {
LABEL_14:
          v13 = *(_DWORD *)(v16 + 116);
          if ( *(_DWORD *)(v16 + 116) >= *(_DWORD *)(v16 + 112) )
            longjmp(v16, 1);
          v10 = *(_DWORD *)(v16 + 108);
          *(_DWORD *)(v16 + 116) = v13 + 1;
          v11 = v10 + 16 * v13;
          *(_DWORD *)(v11 + 12) = v7;
          *(_DWORD *)v11 = v5;
          *(_DWORD *)(v11 + 8) = 0;
          v12 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *v14 = v11;
        }
        *(_DWORD *)(v11 + 8) = v4 + v3;
        *(_DWORD *)(v11 + 4) = v15 + v12;
      }
    }
  }
  return v17;
}
