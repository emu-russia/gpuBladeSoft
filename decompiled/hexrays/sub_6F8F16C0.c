__int64 __stdcall sub_6F8F16C0(__int64 a1, char a2, int a3, unsigned int *a4, unsigned int *a5, int a6, int a7, _DWORD *a8)
{
  int v8; // edi@1
  unsigned int v9; // eax@1
  char v10; // ST04_1@1
  void *v11; // esp@1
  char v13; // dl@4
  int v14; // esi@5
  unsigned int v15; // edi@5
  char v16; // bl@5
  unsigned int *v17; // edx@5
  char v18; // al@6
  int v19; // ecx@8
  unsigned int *v20; // ebx@10
  unsigned int v21; // eax@10
  unsigned int v22; // esi@10
  unsigned int *v23; // edi@11
  size_t v24; // eax@11
  unsigned int v25; // ebx@11
  unsigned int v26; // esi@11
  size_t v27; // eax@12
  unsigned int v28; // edi@15
  unsigned int v29; // eax@15
  unsigned int v30; // edi@19
  unsigned int *v31; // edx@21
  _BYTE *v32; // eax@21
  unsigned int v33; // eax@28
  unsigned int v34; // esi@28
  const char *v35; // edi@28
  unsigned int v36; // esi@28
  size_t v37; // eax@28
  char v38; // bl@30
  int v39; // eax@35
  char v40; // [sp+17h] [bp-25h]@5
  unsigned int *v41; // [sp+18h] [bp-24h]@35
  unsigned int v42; // [sp+1Ch] [bp-20h]@5
  unsigned int v43; // [sp+20h] [bp-1Ch]@5

  v8 = sub_6F95DC10(a7 + 108);
  v9 = 16 * ((unsigned int)(4 * a6 + 27) >> 4);
  sub_6F8A13B0(v9, v10);
  v11 = alloca(v9);
  if ( !sub_6F8C2310(&a1, (int)&a2) )
  {
    v13 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
    if ( a6 )
    {
      v43 = v8;
      v14 = 0;
      v42 = (unsigned int)&v40 & 0xFFFFFFF0;
      v15 = 0;
      v16 = v13;
      v17 = a5;
      do
      {
        while ( 1 )
        {
          v19 = *(_BYTE *)v17[v14];
          if ( (_BYTE)v19 == v16 )
            break;
          a5 = v17;
          v18 = (*(int (__thiscall **)(unsigned int, int))(*(_DWORD *)v43 + 8))(v43, v19);
          v17 = a5;
          if ( v16 == v18 )
            break;
          if ( a6 == ++v14 )
            goto LABEL_10;
        }
        *(_DWORD *)(v42 + 4 * v15++) = v14++;
      }
      while ( a6 != v14 );
LABEL_10:
      v20 = (unsigned int *)v42;
      v21 = v15;
      v22 = v15;
      v42 = 0;
      if ( v15 <= 1 )
      {
LABEL_27:
        if ( v21 == 1 )
        {
          sub_6F92D0F0((_DWORD *)a1);
          v33 = *v20;
          HIDWORD(a1) = -1;
          v34 = v42;
          v35 = (const char *)a5[v33];
          v42 = v33;
          v36 = v34 + 1;
          v37 = strlen(v35);
          v43 = v37;
          if ( v36 >= v37 )
          {
            if ( v36 == v37 )
            {
LABEL_32:
              *a4 = v42;
              return a1;
            }
          }
          else
          {
            while ( !sub_6F8C2310(&a1, (int)&a2) )
            {
              v38 = v35[v36];
              if ( v38 != (unsigned __int8)sub_6F8C23B0((int *)&a1, SHIDWORD(a1)) )
                break;
              ++v36;
              sub_6F92D0F0((_DWORD *)a1);
              HIDWORD(a1) = -1;
              if ( v36 == v43 )
                goto LABEL_32;
            }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v23 = v20;
          v24 = strlen((const char *)a5[*v20]);
          v43 = v22;
          v25 = 1;
          v26 = v24;
          do
          {
            v27 = strlen((const char *)a5[v23[v25]]);
            if ( v26 > v27 )
              v26 = v27;
            ++v25;
          }
          while ( v43 > v25 );
          v20 = v23;
          v28 = v26;
          v22 = v43;
          v29 = *(_DWORD *)(a1 + 8);
          if ( v29 >= *(_DWORD *)(a1 + 12) )
            (*(void (**)(void))(*(_DWORD *)a1 + 40))();
          else
            *(_DWORD *)(a1 + 8) = v29 + 1;
          ++v42;
          HIDWORD(a1) = -1;
          if ( v42 >= v28 || sub_6F8C2310(&a1, (int)&a2) )
            break;
          v30 = 0;
          do
          {
            while ( 1 )
            {
              v31 = &v20[v30];
              LOBYTE(v43) = *(_BYTE *)(a5[*v31] + v42);
              LOBYTE(v32) = BYTE4(a1);
              if ( (_DWORD)a1 && HIDWORD(a1) == -1 )
              {
                v32 = *(_BYTE **)(a1 + 8);
                if ( (unsigned int)v32 >= *(_DWORD *)(a1 + 12) )
                {
                  v39 = *(_DWORD *)a1;
                  v41 = &v20[v30];
                  v32 = (_BYTE *)(*(int (**)(void))(v39 + 36))();
                  v31 = v41;
                  if ( v32 == (_BYTE *)-1 )
                  {
                    LODWORD(a1) = 0;
                    LOBYTE(v32) = -1;
                  }
                }
                else
                {
                  LOBYTE(v32) = *v32;
                }
              }
              if ( (_BYTE)v43 == (_BYTE)v32 )
                break;
              *v31 = v20[--v22];
              if ( v22 <= v30 )
                goto LABEL_25;
            }
            ++v30;
          }
          while ( v22 > v30 );
LABEL_25:
          if ( v22 <= 1 )
          {
            v21 = v22;
            goto LABEL_27;
          }
        }
      }
    }
  }
  *a8 |= 4u;
  return a1;
}
