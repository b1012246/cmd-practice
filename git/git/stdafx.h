// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���̃C���N���[�h �t�@�C���A�܂���
// �Q�Ɖ񐔂������A�����܂�ύX����Ȃ��A�v���W�F�N�g��p�̃C���N���[�h �t�@�C��
// ���L�q���܂��B
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

// TODO: �v���O�����ɕK�v�Ȓǉ��w�b�_�[�������ŎQ�Ƃ��Ă��������B
#include "C:/opencv2.4.9/build/include/opencv2/opencv.hpp"
#include "C:/opencv2.4.9/build/include/opencv/cv.h"
#include "C:/opencv2.4.9/build/include/opencv/highgui.h"

#ifdef _DEBUG
//Debug���[�h�̏ꍇ
#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_core249d.lib") // opencv_core
#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_imgproc249d.lib") // opencv_imgproc
#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_highgui249d.lib") // opencv_highgui
#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_objdetect249d.lib") // opencv_objdetect
//�ȉ��A�K�v�ɉ����Ēǉ�
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_ml249d.lib") // opencv_ml
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_features2d249d.lib") // opencv_features2d
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_video249d.lib") // opencv_video
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_calib3d249d.lib") // opencv_calib3d
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_flann249d.lib") // opencv_flann
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_contrib249d.lib") // opencv_contrib
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_legacy249d.lib") // opencv_legacy
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_gpu249d.lib") // opencv_gpu
#else
//Release���[�h�̏ꍇ
#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_core249.lib")
#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_imgproc249.lib")
#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_highgui249.lib")
#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_objdetect249.lib")
//�ȉ��A�K�v�ɉ����Ēǉ�
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_ml249.lib")
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_features2d249.lib")
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_video249.lib")
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_calib3d249.lib")
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_flann249.lib")
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_contrib249.lib")
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_legacy249.lib")
//#pragma comment(lib,"C:/OpenCV2.4.9/build/x86/vc10/lib/opencv_gpu249.lib")
#endif



// TODO: �v���O�����ɕK�v�Ȓǉ��w�b�_�[�������ŎQ�Ƃ��Ă��������B
