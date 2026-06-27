int __usercall sub_6F85DDFC@<eax>(int a1@<eax>)
{
  int v1; // esi@1
  int result; // eax@3
  int v3; // ebx@5
  char *v4; // edx@6
  int v5; // ecx@6
  void (__cdecl *v6)(_DWORD); // edx@12
  signed int v7; // ebx@13
  int v8; // edi@15
  void (__cdecl **v9)(_DWORD); // eax@17
  void (__cdecl **v10)(_DWORD); // eax@20
  void (__cdecl **v11)(_DWORD); // eax@21
  signed int v12; // eax@22
  signed int v13; // edx@22
  signed int v14; // ecx@22
  int v15; // eax@28
  char *v16; // edi@34
  signed int v17; // ebx@36
  int v18; // eax@41
  int v19; // eax@43
  int v20; // eax@52
  signed int v21; // ebx@54
  _DWORD *v22; // eax@54
  int v23; // edi@55
  void (__cdecl **v24)(_DWORD); // edx@56
  _DWORD *v25; // ST18_4@56
  int v26; // eax@60
  int v27; // eax@61
  int v28; // ebx@64
  int v29; // eax@67
  int v30; // eax@31
  char *v31; // edi@76
  int v32; // ebx@76
  int v33; // eax@79
  int v34; // edx@80
  int v35; // eax@2
  unsigned int v36; // [sp+1Ch] [bp-A4Ch]@22
  int v37; // [sp+24h] [bp-A44h]@33
  void (__cdecl *v38)(_DWORD); // [sp+28h] [bp-A40h]@12
  int v39; // [sp+2Ch] [bp-A3Ch]@3
  int v40; // [sp+30h] [bp-A38h]@22
  signed int v41; // [sp+34h] [bp-A34h]@11
  signed int v42; // [sp+38h] [bp-A30h]@22
  int v43; // [sp+3Ch] [bp-A2Ch]@22
  char v44[2562]; // [sp+44h] [bp-A24h]@6
  char v45[34]; // [sp+A46h] [bp-22h]@55

  v1 = a1;
  if ( *(_DWORD *)(a1 + 200) <= 0 )
  {
    v35 = *(_DWORD *)a1;
    *(_DWORD *)(v35 + 20) = 20;
    *(_DWORD *)(v35 + 24) = 0;
    (**(void (__cdecl ***)(_DWORD))v1)(v1);
  }
  result = *(_DWORD *)(v1 + 204);
  v39 = result;
  if ( *(_DWORD *)(result + 20) || *(_DWORD *)(result + 24) != 63 )
  {
    *(_BYTE *)(v1 + 248) = 1;
    v3 = *(_DWORD *)(v1 + 76);
    if ( v3 > 0 )
    {
      v4 = v44;
      v5 = 0;
      do
      {
        result = 0;
        do
          *(_DWORD *)&v4[4 * result++] = -1;
        while ( result != 64 );
        v4 += 256;
        ++v5;
      }
      while ( v5 != v3 );
    }
  }
  else
  {
    *(_BYTE *)(v1 + 248) = 0;
    v34 = *(_DWORD *)(v1 + 76);
    if ( v34 > 0 )
    {
      result = 0;
      do
        v45[result++] = 0;
      while ( result != v34 );
    }
  }
  if ( *(_DWORD *)(v1 + 200) > 0 )
  {
    v41 = 1;
    while ( 1 )
    {
      v6 = *(void (__cdecl **)(_DWORD))v39;
      v38 = *(void (__cdecl **)(_DWORD))v39;
      if ( (unsigned int)(*(_DWORD *)v39 - 1) <= 3
        || (v11 = *(void (__cdecl ***)(_DWORD))v1,
            v11[5] = (void (__cdecl *)(_DWORD))27,
            v11[6] = v6,
            *(_DWORD *)(*(_DWORD *)v1 + 28) = 4,
            (**(void (__cdecl ***)(_DWORD))v1)(v1),
            (signed int)v38 > 0) )
      {
        v7 = 0;
        do
        {
          v8 = *(_DWORD *)(v39 + 4 * v7 + 4);
          if ( v8 < 0 || v8 >= *(_DWORD *)(v1 + 76) )
          {
            v9 = *(void (__cdecl ***)(_DWORD))v1;
            v9[5] = (void (__cdecl *)(_DWORD))20;
            v9[6] = (void (__cdecl *)(_DWORD))v41;
            (**(void (__cdecl ***)(_DWORD))v1)(v1);
          }
          if ( v7 && v8 <= *(_DWORD *)(v39 + 4 * v7) )
          {
            v10 = *(void (__cdecl ***)(_DWORD))v1;
            v10[5] = (void (__cdecl *)(_DWORD))20;
            v10[6] = (void (__cdecl *)(_DWORD))v41;
            (**(void (__cdecl ***)(_DWORD))v1)(v1);
          }
          ++v7;
        }
        while ( (signed int)v38 > v7 );
      }
      v36 = *(_DWORD *)(v39 + 20);
      v12 = *(_DWORD *)(v39 + 24);
      v42 = *(_DWORD *)(v39 + 24);
      v13 = *(_DWORD *)(v39 + 28);
      v40 = *(_DWORD *)(v39 + 28);
      v14 = *(_DWORD *)(v39 + 32);
      v43 = *(_DWORD *)(v39 + 32);
      if ( *(_BYTE *)(v1 + 248) )
      {
        if ( v36 > 0x3F || (signed int)v36 > v12 || v12 > 63 || v13 < 0 || v13 > 10 || v14 < 0 || v14 > 10 )
        {
          v15 = *(_DWORD *)v1;
          *(_DWORD *)(v15 + 20) = 18;
          *(_DWORD *)(v15 + 24) = v41;
          (**(void (__cdecl ***)(_DWORD))v1)(v1);
        }
        if ( v36 )
        {
          if ( v38 == (void (__cdecl *)(_DWORD))1 )
          {
LABEL_33:
            v37 = 0;
            while ( 1 )
            {
              v16 = &v44[256 * *(_DWORD *)(v39 + 4 * v37 + 4)];
              if ( v36 )
              {
                if ( *(_DWORD *)v16 < 0 )
                {
                  v27 = *(_DWORD *)v1;
                  *(_DWORD *)(v27 + 20) = 18;
                  *(_DWORD *)(v27 + 24) = v41;
                  (**(void (__cdecl ***)(_DWORD))v1)(v1);
                  v17 = v36;
                }
                else
                {
                  v17 = v36;
                }
              }
              else
              {
                v17 = 0;
              }
              if ( v17 <= v42 )
                break;
LABEL_46:
              if ( (signed int)v38 <= ++v37 )
                goto LABEL_47;
            }
            while ( 2 )
            {
              v19 = *(_DWORD *)&v16[4 * v17];
              if ( v19 >= 0 )
              {
                if ( v40 != v19 || v40 - 1 != v43 )
                {
LABEL_41:
                  v18 = *(_DWORD *)v1;
                  *(_DWORD *)(v18 + 20) = 18;
                  *(_DWORD *)(v18 + 24) = v41;
                  (**(void (__cdecl ***)(_DWORD))v1)(v1);
                }
              }
              else if ( v40 )
              {
                goto LABEL_41;
              }
              *(_DWORD *)&v16[4 * v17++] = v43;
              if ( v42 < v17 )
                goto LABEL_46;
              continue;
            }
          }
          v26 = *(_DWORD *)v1;
          *(_DWORD *)(v26 + 20) = 18;
          *(_DWORD *)(v26 + 24) = v41;
          (**(void (__cdecl ***)(_DWORD))v1)(v1);
        }
        else if ( v42 )
        {
          v30 = *(_DWORD *)v1;
          *(_DWORD *)(v30 + 20) = 18;
          *(_DWORD *)(v30 + 24) = v41;
          (**(void (__cdecl ***)(_DWORD))v1)(v1);
        }
        if ( (signed int)v38 > 0 )
          goto LABEL_33;
      }
      else
      {
        if ( v36 || v42 != 63 || v40 || v43 )
        {
          v20 = *(_DWORD *)v1;
          *(_DWORD *)(v20 + 20) = 18;
          *(_DWORD *)(v20 + 24) = v41;
          (**(void (__cdecl ***)(_DWORD))v1)(v1);
        }
        if ( (signed int)v38 > 0 )
        {
          v21 = 0;
          v22 = (_DWORD *)v1;
          do
          {
            v23 = *(_DWORD *)(v39 + 4 * v21 + 4);
            if ( v45[v23] )
            {
              v24 = (void (__cdecl **)(_DWORD))*v22;
              v24[5] = (void (__cdecl *)(_DWORD))20;
              v24[6] = (void (__cdecl *)(_DWORD))v41;
              v25 = v22;
              (*(void (__cdecl **)(_DWORD *))*v22)(v22);
              v22 = v25;
            }
            v45[v23] = 1;
            ++v21;
          }
          while ( (signed int)v38 > v21 );
          v1 = (int)v22;
        }
      }
LABEL_47:
      result = ++v41;
      if ( *(_DWORD *)(v1 + 200) < v41 )
        break;
      v39 += 36;
    }
  }
  if ( *(_BYTE *)(v1 + 248) )
  {
    if ( *(_DWORD *)(v1 + 76) > 0 )
    {
      v31 = v44;
      v32 = 0;
      do
      {
        result = *(_DWORD *)v31;
        if ( *(_DWORD *)v31 < 0 )
        {
          v33 = *(_DWORD *)v1;
          *(_DWORD *)(v33 + 20) = 46;
          result = (*(int (__cdecl **)(int))v33)(v1);
        }
        ++v32;
        v31 += 256;
      }
      while ( *(_DWORD *)(v1 + 76) > v32 );
    }
  }
  else if ( *(_DWORD *)(v1 + 76) > 0 )
  {
    v28 = 0;
    do
    {
      while ( v45[v28] )
      {
        if ( *(_DWORD *)(v1 + 76) <= ++v28 )
          return result;
      }
      v29 = *(_DWORD *)v1;
      *(_DWORD *)(v29 + 20) = 46;
      result = (*(int (__cdecl **)(int))v29)(v1);
      ++v28;
    }
    while ( *(_DWORD *)(v1 + 76) > v28 );
  }
  return result;
}
