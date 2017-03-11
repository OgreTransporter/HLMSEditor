/****************************************************************************
**
** Copyright (C) 2016
**
** This file is generated by the Magus toolkit
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
****************************************************************************/

#ifndef HLMS_NODE_SAMPLERBLOCK_H
#define HLMS_NODE_SAMPLERBLOCK_H

#include <QWidget>
#include <QVector2D>
#include <QVector3D>
#include <QQuaternion>
#include "node_node.h"
#include "node_port.h"

QT_BEGIN_NAMESPACE

QT_END_NAMESPACE

using namespace Magus; // Use 'namespace Magus' because of issues with signal and slots;

/****************************************************************************
 * ...
 ***************************************************************************/
class HlmsNodeSamplerblock : public Magus::QtNode
{
    public:
        HlmsNodeSamplerblock(QString title, QGraphicsItem* parent = 0);
        virtual ~HlmsNodeSamplerblock(void);

        // Getters
        const QString getFileNameTexture(void) const {return mFileNameTexture;}
        const QString getBaseNameTexture(void) const {return mBaseNameTexture;}
        const QString getPathTexture(void) const {return mPathTexture;}
        unsigned int getTextureType(void) const {return mTextureType;}
        unsigned int getTextureIndex(void) const {return mTextureIndex;}
        bool getSamplerblockEnabled(void) const {return mSamplerblockEnabled;}
        unsigned int getTextureMinFilter(void) const {return mTextureMinFilter;}
        unsigned int getTextureMagFilter(void) const {return mTextureMagFilter;}
        unsigned int getTextureMipFilter(void) const {return mTextureMipFilter;}
        unsigned int getTextureAddressingModeU(void) const {return mTextureAddressingModeU;}
        unsigned int getTextureAddressingModeV(void) const {return mTextureAddressingModeV;}
        unsigned int getTextureAddressingModeW(void) const {return mTextureAddressingModeW;}
        float getMipLodBias (void) const {return mMipLodBias;}
        float getMaxAnisotropy (void) const {return mMaxAnisotropy;}
        float getCompareFunction (void) const {return mCompareFunction;}
        float getMinLod (void) const {return mMinLod;}
        float getMaxLod (void) const {return mMaxLod;}
        float getBorderColourRed (void) const {return mBorderColourRed;}
        float getBorderColourGreen (void) const {return mBorderColourGreen;}
        float getBorderColourBlue (void) const {return mBorderColourBlue;}
        unsigned int getUvSet (void) const {return mUvSet;}
        unsigned int getBlendMode (void) const {return mBlendMode;}
        float getMapWeight (void) const {return mMapWeight;}
        QVector2D getOffset (void) const {return mOffset;}
        QVector2D getScale (void) const {return mScale;}
        bool getAnimationEnabled (void) const {return mAnimationEnabled;} // Unlit only
        QVector2D getAnimationScale (void) const {return mAnimationScale;} // Unlit only
        QQuaternion getAnimationOrientation (void) const {return mAnimationOrientation;} // Unlit only
        QVector2D getAnimationTranslate (void) const {return mAnimationTranslate;} // Unlit only

        // Setters
        void setFileNameTexture(const QString fileNameTexture, const QPixmap* pixmap = 0);
        void setBaseNameTexture(const QString baseNameTexture) {mBaseNameTexture = baseNameTexture;}
        void setPathTexture(const QString pathTexture) {mPathTexture = pathTexture;}
        void setTextureType(unsigned int textureType) {mTextureType = textureType;}
        void setTextureIndex(unsigned int textureIndex) {mTextureIndex = textureIndex;}
        void setSamplerblockEnabled (bool samplerblockEnabled) {mSamplerblockEnabled = samplerblockEnabled;}
        void setTextureMinFilter(unsigned int textureMinFilter) {mTextureMinFilter = textureMinFilter;}
        void setTextureMagFilter(unsigned int textureMagFilter) {mTextureMagFilter = textureMagFilter;}
        void setTextureMipFilter(unsigned int textureMipFilter) {mTextureMipFilter = textureMipFilter;}
        void setTextureAddressingModeU(unsigned int textureAddressingModeU) {mTextureAddressingModeU = textureAddressingModeU;}
        void setTextureAddressingModeV(unsigned int textureAddressingModeV) {mTextureAddressingModeV = textureAddressingModeV;}
        void setTextureAddressingModeW(unsigned int textureAddressingModeW) {mTextureAddressingModeW = textureAddressingModeW;}
        void setMipLodBias (float mipLodBias) {mMipLodBias = mipLodBias;}
        void setMaxAnisotropy (float maxAnisotropy) {mMaxAnisotropy = maxAnisotropy;}
        void setCompareFunction (unsigned int compareFunction) {mCompareFunction = compareFunction;}
        void setMinLod (float minLod) {mMinLod = minLod;}
        void setMaxLod (float maxLod) {mMaxLod = maxLod;}
        void setBorderColourRed (float borderColourRed) {mBorderColourRed = borderColourRed;}
        void setBorderColourGreen (float borderColourGreen) {mBorderColourGreen = borderColourGreen;}
        void setBorderColourBlue (float borderColourBlue) {mBorderColourBlue = borderColourBlue;}
        void setUvSet (unsigned int uvSet) {mUvSet = uvSet;}
        void setBlendMode (unsigned int blendMode) {mBlendMode = blendMode;}
        void setMapWeight (float mapWeight) {mMapWeight = mapWeight;}
        void setOffset (QVector2D offset) {mOffset = offset;}
        void setScale (QVector2D scale) {mScale = scale;}
        void setAnimationEnabled (bool animationEnabled) {mAnimationEnabled = animationEnabled;} // Unlit only
        void setAnimationScale (QVector2D animationScale) {mAnimationScale = animationScale;} // Unlit only
        void setAnimationOrientation (QQuaternion animationOrientation) {mAnimationOrientation = animationOrientation;} // Unlit only
        void setAnimationTranslate (QVector2D animationTransform) {mAnimationTranslate = animationTransform;} // Unlit only

        // Executed when this node is connected
        void nodeConnected(QtPort* port, QtConnection* connection);

    private:
        QString mFileNameTexture;
        QString mBaseNameTexture;
        QString mPathTexture;
        unsigned int mTextureType; // Only used for Hlms Pbs
        unsigned int mTextureIndex; // Only used for Hlms Unlit
        unsigned int mTextureMinFilter;
        unsigned int mTextureMagFilter;
        unsigned int mTextureMipFilter;
        unsigned int mTextureAddressingModeU;
        unsigned int mTextureAddressingModeV;
        unsigned int mTextureAddressingModeW;
        float mMipLodBias;
        float mMaxAnisotropy;
        unsigned int mCompareFunction;
        float mMinLod;
        float mMaxLod;
        float mBorderColourRed;
        float mBorderColourGreen;
        float mBorderColourBlue;
        unsigned int mUvSet;
        unsigned int mBlendMode; // Only in case of detail maps
        float mMapWeight; // For normal map and detail maps
        QVector2D mOffset;
        QVector2D mScale;
        bool mAnimationEnabled;
        QVector2D mAnimationScale; // Unlit only
        QQuaternion mAnimationOrientation; // Unlit only
        QVector2D mAnimationTranslate; // Unlit only
        bool mSamplerblockEnabled; // Enable / disable the samplerblock, to check the difference when rendering with/without the texture
        Magus::QtPort* mPort;
};

#endif
