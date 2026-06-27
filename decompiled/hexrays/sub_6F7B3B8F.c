void __usercall sub_6F7B3B8F(int a1@<eax>, int a2@<edx>, int a3@<esi>, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43)
{
  int v43; // ebx@1
  int v44; // ecx@1
  int v45; // eax@1
  int v46; // ebx@1

  v43 = a3 + 8 * a2;
  v44 = *(_DWORD *)(v43 + 436);
  JUMPOUT(v44, 0, sub_6F7B3D80);
  v45 = *(_DWORD *)(a1 + 4);
  v46 = *(_DWORD *)(v43 + 440);
  JUMPOUT(v45, v46, &loc_6F7B0ED3);
  *(_DWORD *)(a43 + 364) = v46;
  *(_DWORD *)(a43 + 360) = v45;
  *(_DWORD *)(a43 + 356) = v44;
  *(_DWORD *)(a43 + 352) = a2;
  JUMPOUT(&loc_6F7B2B5E);
}
