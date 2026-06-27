int __usercall sub_6F7B9AA0@<eax>(int result@<eax>, int *a2@<edx>)
{
  int v2; // ebp@1
  int v3; // esi@2
  unsigned int v4; // ebx@2
  int v5; // edi@2
  int v6; // eax@3
  int v7; // eax@3
  size_t v8; // ebx@4
  int v9; // ebx@5
  int *v10; // ebx@7
  int v11; // ebp@7
  int v12; // edx@8
  int v13; // eax@11
  int v14; // eax@11
  int *v15; // [sp+1Ch] [bp-20h]@2

  v2 = *a2;
  if ( !*a2 )
    return result;
  v3 = result;
  v4 = *(_DWORD *)v2;
  v5 = *(_DWORD *)(v2 + 4);
  v15 = a2;
  sub_6F773D90(result, *(_DWORD *)(v2 + 24));
  *(_DWORD *)(v2 + 24) = 0;
  if ( v4 <= 1 )
  {
    sub_6F773D90(v3, *(_DWORD *)(v2 + 216));
    v13 = *(_DWORD *)(v2 + 148);
    *(_DWORD *)(v2 + 216) = 0;
    sub_6F773D90(v3, v13);
    v14 = *(_DWORD *)(v2 + 288);
    *(_DWORD *)(v2 + 148) = 0;
    sub_6F773D90(v3, v14);
    *(_DWORD *)(v2 + 288) = 0;
    if ( !v4 )
      goto LABEL_5;
  }
  else
  {
    memset((void *)(v2 + 28), 0, 4 * v4 - 4);
    sub_6F773D90(v3, *(_DWORD *)(v2 + 216));
    v6 = *(_DWORD *)(v2 + 148);
    *(_DWORD *)(v2 + 216) = 0;
    sub_6F773D90(v3, v6);
    v7 = *(_DWORD *)(v2 + 288);
    *(_DWORD *)(v2 + 148) = 0;
    sub_6F773D90(v3, v7);
    *(_DWORD *)(v2 + 288) = 0;
  }
  v8 = 4 * v4;
  memset((void *)(v2 + 212), 0, v8);
  memset((void *)(v2 + 144), 0, v8);
  memset((void *)(v2 + 284), 0, v8);
LABEL_5:
  v9 = 0;
  sub_6F773D90(v3, *(_DWORD *)(v2 + 136));
  *(_DWORD *)(v2 + 136) = 0;
  *(_DWORD *)(v2 + 140) = 0;
  if ( v5 )
  {
    do
    {
      sub_6F773D90(v3, *(_DWORD *)(v2 + 4 * v9 + 8));
      *(_DWORD *)(v2 + 4 * v9++ + 8) = 0;
    }
    while ( v5 != v9 );
    v10 = (int *)(v2 + 92);
    v11 = 0;
    do
    {
      v12 = *v10;
      ++v11;
      v10 += 3;
      sub_6F773D90(v3, v12);
      *(v10 - 3) = 0;
      *((_BYTE *)v10 - 16) = 0;
    }
    while ( v5 != v11 );
  }
  result = sub_6F773D90(v3, *v15);
  *v15 = 0;
  return result;
}
